/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 19:32:59 by msefako           #+#    #+#             */
/*   Updated: 2018/06/04 22:56:32 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		int_sz(int nbr)
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

char			*ft_itoa(int nbr)
{
	int		size;
	int		sym;
	char	*str;

	if (nbr)
	{
		size = int_sz(nbr);
		str = (char *)malloc(sizeof(char) * size + 1);
		if (nbr < 0)
		{
			nbr *= -1;
			sym = '-';
		}
		str[size] = '\0';
		size--;
		while (size >= 0)
		{
			str[size] = '0' + (nbr % 10);
			nbr = (nbr / 10);
			size--;
		}
		(sym == '-') ? (str[0] = sym) : str[0];
		return (str);
	}
	return (NULL);
}
