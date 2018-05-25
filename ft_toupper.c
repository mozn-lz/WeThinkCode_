#include "libft.h"

int		toupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}
