#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{

	int i;
	char *sc;

	i = 0;
	sc = (char*)s;
	while (n-- != 0)
	{
		if (sc[i] == (unsigned char)c)
			return (&sc[i]);
		i++;
	}
	return (NULL);
}
