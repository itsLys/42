#include "libft.h"
#include <string.h>

//  TODO: What is size_t?
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (ft_strlen(haystack) < ft_strlen(needle))
		return NULL;

	i = 0;
	if (needle[0])
	{
		while (haystack[i] && len--)
		{
			if (haystack[i] == needle[0])
			{
				j = 0;
				while (i + j <= len && needle[j] && needle[j] == haystack[i + j])
					j++;
				if (needle[j] == '\0')
					return (char *) (haystack + i);
			}
			i++;
		}
		return (NULL);
	}
	return (char *) (haystack);
}
