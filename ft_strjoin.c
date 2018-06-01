/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 03:48:27 by msefako           #+#    #+#             */
/*   Updated: 2018/05/31 22:54:29 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char fresh;

	fresh = (char *) malloc(sizeof(char) * ft_strlcat(s1, s2, ft_strlen(s1)));

	if (fresh)
	{
		fresh = strcat(s1,s2);
		i = ft_strlen(fresh);
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
