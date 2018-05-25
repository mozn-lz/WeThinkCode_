#include "libft.h"
char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	/*	strncpy	*/
	int i;
	
	i = 0;
	while ((src[i] != '\0') && len != 0)
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}

