#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		c -= 32;
	return (c);
}
