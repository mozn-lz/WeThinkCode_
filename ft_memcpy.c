#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *a;
	unsigned const char *b;

	i = 0;
	a = dest;
	b = src;
	while (n-- > 0)
	{
		a[i] =  b[i];
		i++;
	}
	return (dest);
}
