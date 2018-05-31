/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:12:04 by msefako           #+#    #+#             */
/*   Updated: 2018/05/31 08:36:02 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t len)
{
	int		i;
	int		j;
	size_t	l;
	char	*nstack;

	i = 0;
	j = 0;
	l = 0;
	nstack = (char*)stack;
	if (ft_strlen((char*)needle) == 0)
		return (&nstack[i]);
	while (stack[i++] != '\0')
	{
		j = 0;
		l = 0;
		while (stack[i + j] == needle[j])
			if (needle[j++] == '\0' || l++ <= len)
				return (&nstack[i]);
	}
	return (NULL);
}
