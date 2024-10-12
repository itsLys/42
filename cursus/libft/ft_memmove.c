#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *dp;
	const char *sp;

	if (dest == src || n == 0)
		return (dest);
	dp = (char *) dest;
	sp = (const char *) src;
	if (dp > sp)
	{
		while (n--)
			dp[n] = sp[n];
	} 
	else
	{
		while (n--)
			*(dp++) = *(sp++);
	}
	return (dest);
}
/* 
 * if dest is after src, copying forward will result in data loss
 * n = 3
 * s[2,3,4,9,5]
 *     d[4,9,5]
 * expected
 * s[2,3,2,3,4]
 * result
 * s[2,3,2,3,2]
 * */
