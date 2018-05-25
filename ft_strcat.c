#include "libft.h"
char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	/* works: */
	int i;
	int j;

	i = 0;
	j = 0;
	i = ft_strlen(s1);
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
		
	}
	s1[i] = '\0';
	return (s1);
}

