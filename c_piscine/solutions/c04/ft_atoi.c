#include <ctype.h>
int issign(char c)
{
	if (c == '-' || c == '+')
		return 1;
	return 0;
}

#include <stdio.h>
int	ft_atoi(char *str)
{
	int n = 0;
	int sign = 1;

	while (*str && isspace(*str))
		str++;
	while (*str && issign(*str)) 
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str && isdigit(*str))
		n = (*(str++) - '0') + n * 10;
	return n * sign;
}
