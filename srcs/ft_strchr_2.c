#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	unsigned char itc;

	char *s2 = (char*)s;
	int i;

	itc = c;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == itc)
			return (s2 + i);
		i++;
	}
	if (s2[i] == itc)
		return (s2 + i);
	else
		return (NULL);
}
