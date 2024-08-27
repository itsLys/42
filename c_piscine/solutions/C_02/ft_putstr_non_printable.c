#include <unistd.h>

void	put_hex(char c)
{
	write(1, "\\", 1);
	if (c == -128)
	{
		write(1, "-80", 3);
		return ;
	}
	if (c < 0)
	{
		write(1, "-", 1);
		c = -c;
	}
	write(1, &"0123456789abcdef"[c / 16], 1);
	write(1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > 126)
			put_hex(*str);
		else
		 write(1, str, 1);
		str++;
	}
}
