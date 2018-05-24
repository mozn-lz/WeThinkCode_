#include "libft.h"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:57:59 by msefako           #+#    #+#             */
/*   Updated: 2018/05/21 12:00:17 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char itc;
	char *rtn;
	int i;

	rtn=(char*)s;
	itc = (char)c;
	i = -1;
	while (s[i++] != '\0')
	{
		if (rtn[i] == itc)
		{
			return (&rtn[i]);
		}
	}
	return (NULL);
}
