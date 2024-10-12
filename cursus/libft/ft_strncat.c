#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t ssize)
{
	ft_strncpy(dst + ft_strlen(dst), src, ssize);
	return (dst);
}
