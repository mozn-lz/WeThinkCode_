/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 04:00:28 by msefako           #+#    #+#             */
/*   Updated: 2018/06/05 04:39:17 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	st;
	size_t	ed;
	char	*fresh;

	st = 0;
	ed = ft_strlen((char*)s -1);
	if (s)
	{
		while (s[st] && (s[st] == '\n' ||  s[st] == ' ' || s[st] == '\t'))
			st++;
		if (s[st] == '\0')
			return (ft_strdup(s + st));
		while (s[ed] && (s[ed] == '\n' || s[ed] == ' ' || s[ed] == '\t'))
			ed--;
		fresh = ft_strnew(ed);
		if (fresh)
		{
			fresh = ft_strsub(s, st, ed - st + 1);
			fresh[ed] = '\0';
		}
		return (fresh);
	}
	return (NULL);
}
