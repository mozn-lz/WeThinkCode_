/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 23:05:03 by msefako           #+#    #+#             */
/*   Updated: 2018/06/01 05:42:20 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ** ft_strsplit(char const *s, char c)
{

	int i;
	int wd;
	int	lt_cnt;
	char fresh[5][5];

	i = 0;
	wd = -1;
	lt_cnt = 0;

	while (s[i] != '\0')
	{
		while (s[i++] != c)
			lt_cnt++;
		fresh = (char*) malloc(sizeof(char) * lt_cnt);
		if (fresh)
		{
			wd++;
			fresh[wd][lt_cnt--] == '\0';
			while(lt_cnt >= 0)
			{
				fresh[wd][lt_cnt] == s[i - lt_cnt];
					lt_cnt--;
			}
		}
		else
			return (NULL);
		i++;
	}
	if(str [i] == '\0')
		return (fresh);
}

int main()
{
	int i;
	int j;
	char arr;
	char str[] = "life i aewsome";
	char obs = '*';

	i = 0;
	j = 0;
	arr = ft_strsplit(str, obs);
	while (arr[i])
	{
		while (arr[i][j] != '\0')
		{
			printf("%c", arr[i][j]);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
