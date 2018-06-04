/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 23:05:03 by msefako           #+#    #+#             */
/*   Updated: 2018/06/04 16:59:03 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

int		wd_cnt(char *s, char x)
{
	int		wds;
	int		i;

	wds = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == x && s[i - 1] != x)
			wds++;
		i++;
	}
	return (wds);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		wd;
 	int		lt;
	char	**fresh;
//i	char	*str;

	i = 0;
	wd = 0;
	lt = 0;
	//wd = wd_cnt((char*)s, c);
	fresh  = (char**)malloc(sizeof(char) * wd + 1);
	if (!fresh)
		return (NULL);
	else
	{
		while (s[i] != '\0')
		{
			while (s[i] != c && s[i] == '\0')
			{
				printf("letter loop %d\n", lt);
				lt++;
				i++;
			}
			if (s[i + 1] == c)
			{
				printf("Go: %s\n",ft_strsub(s, i - lt, lt));
//				printf("str: %s\n", str);
//				printf("word->%s\n",fresh[wd]);
				wd++;
				lt = 0;
			}
			i++;
		}
	} 
	return (fresh);
}
