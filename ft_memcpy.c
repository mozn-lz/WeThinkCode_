/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:53:36 by msefako           #+#    #+#             */
/*   Updated: 2018/05/28 12:00:27 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int					i;
	unsigned char		*a;
	unsigned const char	*b;

	i = 0;
	a = dest;
	b = src;
	while (n-- > 0)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
