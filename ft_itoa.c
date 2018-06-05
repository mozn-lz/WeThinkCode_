/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 19:32:59 by msefako           #+#    #+#             */
/*   Updated: 2018/06/05 01:03:42 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		int_sz(int nbr)
{
	size_t	i;

	i = 1;
	while (nbr != 0)
	{
		nbr /= 10;
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
		if (nbr < 0)
		{
			nbr *= -1;
			sym = '-';
			size++;
		}
		str = ft_strnew(size);
		if (str)
		{
			while (size >= 0)
			{
				str[size] = '0' + (nbr % 10);
				nbr = (nbr / 10);
				size--;
			}
			(sym == '-') ? (str[0] = sym) : str[0];
			return (str);
		}
	}
	return (NULL);
}
