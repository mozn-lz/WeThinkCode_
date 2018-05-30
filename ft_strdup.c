/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 18:32:10 by msefako           #+#    #+#             */
/*   Updated: 2018/05/28 12:20:24 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*rtn;

	i = ft_strlen((char*)s);
	rtn = (char *)malloc(sizeof(char ) * i);
	if (rtn)
	{
		return (ft_strcpy(rtn, s));
	}
	else
		return (NULL);
}
