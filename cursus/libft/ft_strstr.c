#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[0])
	{
		while (haystack[i])
		{
			if (haystack[i] == needle[0])
			{
				j = 0;
				while (needle[j] && needle[j] == haystack[i + j])
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
