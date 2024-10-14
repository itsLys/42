#include "libft.h"

int	ft_alnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
