/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 04:00:28 by msefako           #+#    #+#             */
/*   Updated: 2018/05/29 05:43:13 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char *s)
{
	if (s == "\n" || s == "\t" || s == " ")
		return (NULL);
	return (s);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;
	char	fresh;

	i = 0;
	start = 0;
	end = 0;
	if(s)
	{
		while (s[i] != '\0')
		{
			if (ft_isspace(s[i]) != NULL)
				start = i;
			i++;
		}
		i = ft_strlen(s);
		while (i >= start)
		{
			if (ft_isspace(s[i]) != NULL)
				end = i;
			i--;
		}
		ft_strncpy(s[start],start - i );
	}
	return (NULL);
}

