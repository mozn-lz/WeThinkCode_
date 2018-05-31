/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:44:55 by msefako           #+#    #+#             */
/*   Updated: 2018/05/31 16:49:45 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int character, size_t size)
{
	size_t			i;
	unsigned char	*pointer;

	i = 0;
	pointer = (unsigned char*)str;
	while (i < size)
	{
		pointer[i] = character;
		i++;
	}
	return (str);
}
