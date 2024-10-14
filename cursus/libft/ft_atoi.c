#include "libft.h"


int	ft_atoi(const char *nptr)
{
	int n;
	int sign;

	n = 0;
	sign = 1;
	while (*nptr && ft_isspace(*nptr))
		nptr++;
	if (*nptr && ft_issign(*nptr))
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	while (*nptr && ft_isdigit(*nptr))
		n = (*(nptr++) - '0') + n * 10;
	return (n * sign);
}
