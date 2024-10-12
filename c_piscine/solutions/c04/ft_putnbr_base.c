#include <unistd.h>
#include <string.h>

int	check_base(char *base, int blen)
{
	int i;
	int j;

	if (blen < 2)
		return 0;
	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (j == i)
				j++;
			if (base[i] == base[j] || base[j] == '-' || base[j] == '+')
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

void print_nbr(long nbr, char *base, int blen)
{
	char str[256];
	int i;

	i = 0;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	if (!nbr)
		write(1, "0", 1);
	while (nbr > 0)
	{
		str[i++] = base[nbr % blen];
		nbr /= blen;
	}
	str[i] = '\0';
	while (i >= 0)
		write(1, &str[i--], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int blen;

	blen = strlen(base);
	if (check_base(base, blen))
			print_nbr(nbr, base, blen);
}
