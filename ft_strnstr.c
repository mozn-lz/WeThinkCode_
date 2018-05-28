#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t len)
{
	int i;
	int j;
	size_t l;
	char *nstack;

	i = 0;
	j = 0;
	l = 0;
	nstack = (char*)stack;
	if (ft_strlen((char*)needle) == 0)
		return ((char*)stack);
	while (stack[i++] != '\0')
	{
		j = 0;
		l = 0;
		while (stack[i +j] == needle[j])
			if (needle[j++] == '\0' || l++ <= len)
				return (&nstack[i]);
	}
	return (NULL);
}
