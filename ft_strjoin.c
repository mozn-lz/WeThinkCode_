/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 03:48:27 by msefako           #+#    #+#             */
/*   Updated: 2018/06/04 22:12:01 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*fresh;
	int		i;
	char	*s1;
	char	*s2;

	s1 = (char*)str1;
	s2 = (char*)str2;
	i = 0;
	if (s1 && s2)
	{
			printf("A: %s\n", s1);
		fresh = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
		if (fresh)
		{
			fresh = ft_strcat(s1, s2);
			printf("%s\n", fresh);
			i = ft_strlen(fresh);
			fresh[i] = '\0';
			return (fresh);
		}
	}
	return (NULL);
}
