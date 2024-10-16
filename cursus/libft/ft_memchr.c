#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *sp;

	sp = (const unsigned char *) s;
	while (n--)
	{
		if (*(sp) == (unsigned char) n)
		{
			return ((void *) sp);
		}
		sp++;
	}
	return (NULL);
}
