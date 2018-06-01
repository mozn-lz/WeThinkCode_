/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:45:04 by msefako           #+#    #+#             */
/*   Updated: 2018/06/01 17:12:01 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	char sym;
	int strl;

	strl = 0;
	if(n < 0)
		sym = '-';
	str = (char*)malloc(sizeof(char) * ((n +'0') + 1));
	if (!str)
		return (NULL);
	str = n + '0';
	strl = ft_strlen(str);
	str[strl] = '\0';
	return (str);
}

int		main(void)
{
	printf("%s\n", ft_itoa(30));
	return (0);
}
