// void *memcpy(void dest[restrict .n], const void src[restrict .n],size_t n);

#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	dp = (char *) dest;
	sp = (const char *) src;
	while (n--)
		*(dp++) = *(sp++);
	return (dest);
}
