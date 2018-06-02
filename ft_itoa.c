/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:45:04 by msefako           #+#    #+#             */
/*   Updated: 2018/06/02 21:16:25 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		str[i++] = '-';
	}
	if (n >= 10)
		ft_itoa(n /= 10);
	if (n < 10)
		str[i++] = (n + '0');
	ft_putchar(n * 10 + '0');
	return (str);
}

char ita(int num)
{
	char *str;
	int i = 0;
	 while (num != 0)
	 {
        int rem = num % 10;
        str[i++] = (rem > 9)? (rem-10) + 'A' : rem + '0';
        num = num/10;
    }
	 return (*str);
}

int		main(void)
{
	printf("%d\n", ita(350));
//	printf("%s\n", ft_itoa(350));
//	printf("%d\n", (350 + '0'));
	return (0);
}
