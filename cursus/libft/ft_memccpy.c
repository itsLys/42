#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	dp = (unsigned char *) dest;
	sp = (const unsigned char *) src;
	while (n-- && *sp != c)
		*(dp++) = *(sp++);
	return (dest);
}
