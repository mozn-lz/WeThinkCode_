#include <stdio.h>
#include <stdlib.h>

/*	start TEST functions	*/
int		ft_strlen(char  *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*	end TEST functions	*/

char	*ft_strcpy(char *dest, const char *src)
{
	/*	works	*/
	int i;
	
	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	/*	strncpy	*/
	int i;
	
	i = 0;
	while ((src[i] != '\0') && len > 1)
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	/* works: */
	int i;
	int j;

	i = 0;
	j = 0;
	i = ft_strlen(s1);
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
		
	}
	s1[i] = '\0';
	return (s1);
}
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j] && n-- > 1)
	{
		s1[i++] = s2[j++];
	}
	s1[i] = '\0';
	return (s1);
}
char *strdup(const char *s)
{
	int i;
	char *rtn;

	i = 0;
	while (s[i])
		i++;
	rtn = (char *)malloc(sizeof(char ) * i);
	if (rtn)
	{
		return (ft_strcpy(rtn, s));
	}
	else
		return (NULL);
}
int		main(void)
{
	char s1[] = "lord";
	char s2[] = "Chaos";
	char *str;

	str = strdup(s1);
//	printf("strcat %s\n", ft_strcat(s1, s2));
	printf("strcpy: %s\n", ft_strcat(s1, s2));
	printf("strncpy: %s\n", ft_strncat(s2, s1, sizeof(s1)));
	printf("string: %s\n", str);

	return (0);
}
