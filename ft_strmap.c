/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:21:56 by msefako           #+#    #+#             */
/*   Updated: 2018/05/31 22:13:01 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	char	*temp;

//	temp = ft_striter(s, f(s));
	fresh = (f*) malloc(sizeof(f) * ft_strlen(s));
	if (fresh)
		return (fresh);
	return (NULL);
}
