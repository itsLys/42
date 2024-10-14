#include "libft.h"

//  WARN: is it possible to submit own extras without submitting projects extras?
int ft_issign(int c)
{
	if (c == '-' || c == '+')
		return TRUE;
	return FALSE;
}
