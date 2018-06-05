/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 19:32:59 by msefako           #+#    #+#             */
/*   Updated: 2018/06/05 22:35:33 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		int_sz(int nbr)
{
	size_t			i;

	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	tmp_n;

	tmp_n = n;
	len = int_sz(n);
	if (n < 0)
	{
		tmp_n = -n;
		len++;
	}
	str = "0";
	if (n == 0)
		return (str);
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = tmp_n % 10 + '0';
	while (tmp_n /= 10)
		str[--len] = tmp_n % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
