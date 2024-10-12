#include <string.h>

void 	*ft_memset(void *s, int c, size_t n)
{
	char	*dup;

	dup = (char *) s;
	while (n--)
		*dup = c;
	return (s);
}


