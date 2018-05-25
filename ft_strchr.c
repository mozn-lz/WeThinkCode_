#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char itc;
	char *rtn;
	int i;

	rtn=(char*)s;
	itc = (char)c;
	i = -1;
	ft_putstr("strchr");
	while (rtn[i++] != '\0')
	{
		ft_putstr(itc);
		if (rtn[i] == itc)
		{
			ft_putchar('c');
			return (&rtn[i]);
		}
	}
	return (NULL);
}
