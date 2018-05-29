/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 03:10:25 by msefako           #+#    #+#             */
/*   Updated: 2018/05/29 03:46:39 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	max;
	char	fresh;

	max = ft_strlen(s);
	if(max < (len + start))
	{
		fresh = ft_strnew(start + len);
		if (fresh)
		{
			while (start <= len)
			{
				fresh[i] = s[start];
				i++;
				start++;
			}
			return (fresh);
		}
	}
	return (NULL);
}

