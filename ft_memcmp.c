#include "libft.h"
int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	char *sc1;
	char *sc2;

	i = 0;
	sc1 = (char*)s1;
	sc2 = (char*)s2;
	while(n-- != 0)
	{
		if (sc1[i] > sc2[i])
			return (1);
		else if (sc1[i] < sc2[i])
			return (-1);
		i++;
	}
	return (0);
}
