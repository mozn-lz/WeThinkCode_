/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 03:10:25 by msefako           #+#    #+#             */
/*   Updated: 2018/05/31 22:47:32 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	int		i;

	i = 0;
	fresh = ft_strnew(start + len);
	if (fresh)
	{
		while (start <= len)
		{
			fresh[i] = s[start];
			i++;
			start++;
		}
		fresh[i] = '\0'
		if (strlen(fresh) == len + 1)
			return (fresh);
	}
	return (NULL);
}
