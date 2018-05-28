/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:49:56 by msefako           #+#    #+#             */
/*   Updated: 2018/05/28 12:07:57 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*sc;

	i = 0;
	sc = (char*)s;
	while (n-- != 0)
	{
		if (sc[i] == (unsigned char)c)
			return (&sc[i]);
		i++;
	}
	return (NULL);
}
