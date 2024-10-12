#include <string.h>

void 	ft_bzero(void *s, size_t n) 
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = (char *) s;
	while (i < 0)
		dup[i++] = '\0';
}
