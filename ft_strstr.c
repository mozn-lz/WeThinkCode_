/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:11:16 by msefako           #+#    #+#             */
/*   Updated: 2018/05/31 08:21:59 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *stack, const char *needle)
{
	int		i;
	int		j;
	char	*nstack;

	i = 0;
	j = 0;
	nstack = (char*)stack;
	while (stack)
	{
		if (strlen(needle) == 0)
			return (&nstack[i]);
		j = 0;
		while (stack[i + j] == needle[j])
			if (needle[j++] == '\0')
			{
				return (&nstack[i]);
			}
		i++;
	}
	return (NULL);
}
