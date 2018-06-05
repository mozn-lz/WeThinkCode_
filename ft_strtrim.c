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
	int		st;
	int		ed;
	char	*fresh;
	int		i;

	st = 0;
	ed = ft_strlen((char*)s);
	i = 0;
	if (s)
	{
		while (s[st] == '\n' || s[st] == ' ' || s[st] == '\t')
			st++;
		while (s[ed] == '\n' || s[ed] == ' ' || s[ed] == '\t')
			ed--;
		//fresh = ft_strsub(s, st, (ed - st));
		fresh = (char*)malloc(sizeof(char) * (ed-st) + 1);
		if (fresh)
		{
			while (st <= ed)
				fresh[i++] = s[st++];
			fresh[i] = '\0';
		}
		return (fresh);
	}
	return (NULL);
}
