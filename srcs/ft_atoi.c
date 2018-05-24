#include "libft.h"
int		ft_atoi(const char *str)
{
	int rst;
	int i;
	int sym;

	rst = 0;
	i = 0;
	sym = 1;
	if (str[i] == '-')
	{
		sym *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <=57)
			rst = ((str[i] - '0') + (10 * rst));
		i++;
	}
	return (sym * rst);
}
