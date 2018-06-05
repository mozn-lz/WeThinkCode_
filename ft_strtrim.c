/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 04:00:28 by msefako           #+#    #+#             */
/*   Updated: 2018/06/05 22:32:38 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	size_t	st;
	size_t	ed;
	char	*fresh;
	char	*s;

	s = (char*)str;
	st = 0;
	ed = ft_strlen(s) - 1;
	if (s)
	{
		while (s[st] && (s[st] == '\n' || s[st] == ' ' || s[st] == '\t'))
			st++;
		if (s[st] == '\0')
			return (ft_strdup(s + st));
		while ((s[ed] == '\n' || s[ed] == ' ' || s[ed] == '\t'))
			ed--;
		fresh = ft_strnew(ed);
		if (fresh)
			fresh = ft_strsub(s, st, ed - st + 1);
		if (fresh)
			fresh[ed + 1] = '\0';
		return (fresh);
	}
	return (NULL);
}
