#include <stdlib.h>

int		int_sz(int nbr)
{
	int		i;

	i = (nbr <= 0) ? 1 : 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		size;
	int		sym;
	char	*str;

	size = int_sz(nbr);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (nbr < 0)
	{
		nbr *= -1;
		sym  = '-';
	}
	str[size] = '\0';
	size--;
	while (size >= 0)
	{
		str[size] = '0' + (nbr % 10) ;
		nbr = (nbr / 10);
		size--;
	}
	(sym == '-') ? (str[0] = sym) :str[0];
	return (str);
}
