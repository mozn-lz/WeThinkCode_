/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:21:56 by msefako           #+#    #+#             */
/*   Updated: 2018/05/28 23:54:03 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *fresh;

	ft_striter(s, f(s));
	fresh = (char *) malloc(sizeof(char) * ft_strlen(s));
	if (fresh)
		return (fresh);
	return (NULL);
}
