#include <ctype.h>
// Hello
/* Hello
Hi How are you */
int issign(char c)
{
	if (c == '-' || c == '+')
		return 1;
	return 0;
}

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

int	check_str(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return 1;
		str++;
	}
	return 0;
}

#include <string.h>
int	ft_atoi_base(char *str, char *base)
{
	int n = 0;
	int sign = 1;
	int blen = strlen(base);

	if (!check_base(base, blen))
		return 0;
	while (*str && isspace(*str))
		str++;
	while (*str && issign(*str)) 
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str && check_str(*str, base))
		n = (*(str++) - '0') + n * 10;
	return n * sign;
}
