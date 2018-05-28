/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:13:01 by msefako           #+#    #+#             */
/*   Updated: 2018/05/28 12:15:24 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	tc;
	char			*sc;

	tc = (char)c;
	sc = (char *)s;
	i = strlen(sc);
	while (i-- >= 0)
	{
		if (sc[i] == tc)
			return (&sc[i]);
	}
	if (sc[i] == tc)
		return (&sc[i]);
	else
		return (NULL);
}
