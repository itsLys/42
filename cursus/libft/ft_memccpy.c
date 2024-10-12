#include <string.h>

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dp;
	const char 	*sp;

	dp = (char *) dest;
	sp = (const char *) src;
	while (n-- && *sp != c)
		*(dp++) = *(sp++);
	return (dest);
}
