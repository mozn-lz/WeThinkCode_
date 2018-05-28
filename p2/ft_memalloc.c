/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:17:46 by msefako           #+#    #+#             */
/*   Updated: 2018/05/28 13:22:14 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	rtn;

	rtn = (void*)malloc(sizeof(size_t) * size);
	if (rtn)
	{
		ft_memset(rtn, '0', size);
		return (rtn);
	}
	return (NULL);
}
