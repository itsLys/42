#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = malloc(size * sizeof(char));
	return (char *) (ft_memset((void *) str, '\0', size));
}
