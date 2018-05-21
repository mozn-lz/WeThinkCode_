#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char itc;
	char *s2;
	int i;

	s2 = (char*)s;
	itc = c;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == itc)
			return (s2 + i);
		i++;
	}
	if (s2[i] == itc)
		return (s2 + i);
	else
		return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	int i;
	unsigned char tc;
	char *sc;

	tc = (char)c;
	sc = (char *)s;
	i = strlen(sc);
	while (i-- >= 0)
	{
		if (sc[i] == tc)
			return (&sc[i]);
	}
	if (sc[i] == tc)
		return (&sc[i]);
	else
		return (NULL);

}

char	*ft_strstr(const char stack, const char  *needle)
{

}
/*char	*ft_strnstr(const char * stach, const char *needle, size_t len);
char	*ft_strcmp(const char *s1, const char *s2);
char	*ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
*/

int		main(void)
{
//	char s1[] = "lord";
	char s2[] = "Chaosios";
	char s3[] = "Chaosios";
	int	 i1 = 111;
	int i2 = 67;

	printf("strchr_o: %s\n", ft_strchr(s2, i1));
	printf("strchr_C: %s\n", ft_strchr(s2, i2));
	printf("strrchr_o: %s\n", ft_strrchr(s3, i1));
	printf("strrchr_C: %s\n", ft_strrchr(s3, i2));
	return (0);
}
