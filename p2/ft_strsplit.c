/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 23:05:03 by msefako           #+#    #+#             */
/*   Updated: 2018/06/01 14:47:05 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{

	int		i;
	int		wd;
	int		lt_cnt;
	char	**fresh;

	i = 0;
	wd = -1;
	lt_cnt = 0;

	while (s[i] != '\0')
	{
		while (s[i++] != c)
			lt_cnt++;
		*fresh = (char*) malloc(sizeof(char) * lt_cnt);
		if (fresh)
		{
			wd++;
			**fresh[wd][lt_cnt--] == '\0';
			while(lt_cnt >= 0)
			{
				**fresh[wd][lt_cnt] == s[i - lt_cnt];
					lt_cnt--;
			}
		}
		else
			return (NULL);
		i++;
	}
	if(s [i] == '\0')
		return (fresh);
}

int main()
{
	int i;
	i = 0;
	char *s = "welcome to cape town";
	char **ret = ft_strsplit(s, ' ');
	while (ret[i] )
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return (0);
}
