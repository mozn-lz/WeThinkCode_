/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:55:33 by msefako           #+#    #+#             */
/*   Updated: 2018/05/29 02:32:06 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	fresh;

	i = 0;
	while (s[i] != '\0')
	{
		ft_striteri(s, f(i, s[i]));
		i++;
	}
	fresh = (char *) malloc(sizeof(char) * ft_strlen(s));
	return (fresh);
}
