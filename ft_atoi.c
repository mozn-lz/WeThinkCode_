/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:32:54 by msefako           #+#    #+#             */
/*   Updated: 2018/05/30 20:15:07 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	rst;
	int	i;
	int	sym;

	rst = 0;
	i = 0;
	sym = 1;
	if (str[i] == '-')
	{
		sym *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			rst = ((str[i] - '0') + (10 * rst));
		else
			return (rst);
		i++;
	}
	return (sym * rst);
}
