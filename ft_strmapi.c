/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:55:33 by msefako           #+#    #+#             */
/*   Updated: 2018/05/31 22:22:24 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	fresh;

	i = 0;
	if (!s || !f)
		return (NULL);
	fresh = (f*) malloc(sizeof(f) * ft_strlen(s));
	if (fresh)
	{
		while (s[i] != '\0')
		{
			fresh[i] = i(f)(i, s[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	else
		return (NULL);
	return (fresh);
}
