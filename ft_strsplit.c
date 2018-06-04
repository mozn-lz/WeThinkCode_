/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 23:05:03 by msefako           #+#    #+#             */
/*   Updated: 2018/06/01 15:33:22 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
char	*strndup(char *s, int size)
{
	int i;

	i = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (i + 1));

	while (size >= 0)
	{
		str[i] = s[i];
		i++;
	}
	return (*str)
}
*/
char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		wd;
	int		lt;
	char	**fresh;

	i = -1;
	wd = 0;
	lt = 0;
	while (s[++i] != '\0')
	{
		while (s[i] != c)
			lt++;
//		fresh[wd] = (char *) malloc(sizeof(char) * lt +1);
		strncpy(fresh[wd], (char *)s[i],lt);
//		fresh[wd] = ft_strdup(s[i] );
		wd++;
		i++;
	}
	return (fresh);
}

int		main(void)
{
	int i;
	i = 0;
	char *s = "welcome to cape town";
	char **ret = ft_strsplit(s, ' ');
	while (ret[i])
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return (0);
}
