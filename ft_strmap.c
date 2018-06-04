/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:21:56 by msefako           #+#    #+#             */
/*   Updated: 2018/06/01 16:38:35 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	char	*temp;
	int 	i;

	i = 0;
	fresh = (char*) malloc(sizeof(char) * ft_strlen(s));
	if (fresh)
	{
		while (s[i] != '\0')
		{
			fresh[i] = (*f)((char)s[i]);
			i++;
		}
	}
	else		
		return (NULL);
	return (fresh);
}
