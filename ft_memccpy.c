/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:52:50 by msefako           #+#    #+#             */
/*   Updated: 2018/05/28 12:07:21 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dt, const void *restrict sc, int c, size_t n)
{
	int					i;
	unsigned char		*a;
	unsigned const char	*b;

	i = 0;
	a = dt;
	b = sr;
	while (n-- > 0)
	{
		if (b[i] == (unsigned char)c)
			return (dt);
		else
			a[i] = b[i];
		i++;
	}
	return (dt);
}
