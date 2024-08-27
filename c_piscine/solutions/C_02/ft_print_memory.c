#include <unistd.h>
#include <stdio.h>

void	print_address(long addr)
{
	char str[18];
	int i;

	i = 0;
	str[i++] = ':';
	while (i < 16)
	{
		str[i++] = "0123456789abcdef"[addr % 16];
		addr /= 16;
	}
	str[i--] = '\0';
	while (i >= 0)
		write(1, &str[i--], 1);
	write(1, " ", 1);
}

void	print_chars(char *str, unsigned int index, unsigned int size)
{
	int max = 16;

	while (max > 0)
	{
		if (index < size)
		{
			write(1, &"0123456789abcdef"[str[index] / 16], 1);
			write(1, &"0123456789abcdef"[str[index] % 16], 1);
			if (index + 1 >= size)
				write(1, "00", 2);
		}
		else
			write(1, "  ", 2);
		if (max % 2 != 0)
			write(1, " ", 1);
		max--;
		index++;
	}
}

void print_content(char *str, unsigned int index, unsigned int size)
{
	int max = 16;
	while (max > 0 && index < size)	
	{
		if (str[index] < ' ' || str[index] >= 127)
			write(1, ".", 1);
		else
			write(1, &str[index], 1);
		index++;
		max--;
	}
	write(1, " \n", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	// print characters hex
	// print content
	char *str;
	unsigned int i = 0;

	str = (char *)addr;
	while (i < size - 1)
	{
		print_address((long)str + i);
		print_chars(str, i, size);
		print_content(str, i, size);
		i += 16;
	}
	return addr;
}
