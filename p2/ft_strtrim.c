/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 04:00:28 by msefako           #+#    #+#             */
/*   Updated: 2018/05/31 23:02:45 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		st;
	int		ed;
	char	*fresh;

	st = 0;
	ed = strlen(s);
	if(s)
	{
		while (s[st] == '\n' || s[st] == ' ' || s[st] == '\t')
			st++;
		while (s[ed] == '\n' || s[ed] == ' ' || s[ed] == '\t')
			ed--;
//		strncpy(fresh,s[st], (ed - st));
		fresh = ft_strsunb(s, st, (ed - st));
		return (fresh);
	}
	return (NULL);
}
