/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 03:10:25 by msefako           #+#    #+#             */
/*   Updated: 2018/06/04 19:42:06 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*fresh;
	size_t		i;

	i = 0;
	if (len > 0)
	{
		fresh = ft_strnew(len);
		if (fresh)
		{
			while (i < len)
			{
				fresh[i] = s[start + i];
				i++;
			}
			fresh[i] = '\0';
			return (fresh);
		}
	}
	return (NULL);
}
