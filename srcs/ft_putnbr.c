#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int i;

	i = 0;
	if (nb >= 0)
		i = nb;
	if (nb < 0)
	{
		i = nb * -1;
		ft_putchar('-');
	}
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar((i % 10) + '0');
}
