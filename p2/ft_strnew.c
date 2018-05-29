/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 03:34:23 by msefako           #+#    #+#             */
/*   Updated: 2018/05/29 03:34:59 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strnew(size_t size)
{
	char *s[size];

	s = ft_memalloc(size);
	if(s != NUL)
	{
		ft_bzero(s);
		return (s);
	}
	return (NULL);
}
