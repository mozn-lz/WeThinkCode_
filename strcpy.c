#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

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
	i = ft_strlen(sc);
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

char	*ft_strstr(const char *stack, const char *needle)
{
	int i;
	int j;
	char *nstack;

	i = 0;
	j = 0;
	nstack = (char*)stack;
	while (stack[i++])
	{
		j = 0;
		while (stack[i + j] == needle[j])
			if (needle[j++] == '\0')
				return (&nstack[i]);
	}
	return (NULL);
}

char	*ft_strnstr(const char * stack, const char *needle, size_t len)
{
	int i;
	int j;
	size_t l;
	char *nstack;

	i = 0;
	j = 0;
	l = 0;
	nstack = (char*)stack;
	if (ft_strlen((char*)needle) == 0)
		return ((char*)stack);
	while (stack[i++] != '\0')
	{
		j = 0;
		l = 0;
		while (stack[i +j] == needle[j])
			if (needle[j++] == '\0' || l++ <= len)
				return (&nstack[i]);
	}
	return (NULL);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	if (s1 < s2)
		return (-1);
	else if (s1 > s2)
		return (1);
	else // (s1 == s2)
		return (0);
}
char	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i <= n && s1[i] != '\0' && s2[i] != '\0')
	{
		ft_strcmp(s1, s2);
	}
	return (0);
}
//int		ft_atoi(const char *str);


int		main(void)
{
	char s1[] = "lord";
	char s2[] = "Chaos";
	char s3[] = "Chaosiosiosnon";
	char needle[] = "";
//	int	 i1 = 111;
//	int i2 = 67;

//	printf("strchr_o: %s\n", ft_strchr(s2, i1));
//	printf("strchr_C: %s\n", ft_strchr(s2, i2));
//	printf("strrchr_o: %s\n", ft_strrchr(s3, i1));
//	printf("strrchr_C: %s\n", ft_strrchr(s3, i2));
	printf("strstr_C: %s\n", ft_strstr(s3, needle));
	printf("strcmp_1: %d\n", ft_strcmp(s2, s1));
	printf("strcmp_0: %d\n", ft_strcmp(s2, s2));
	printf("strcmp-1: %d\n",ft_strcmp(s1, s2));
	printf("strncmp: %d\n", ft_strncmp(s2, s1, 10));
	printf("strncmp: %d\n", ft_strncmp(s2, s1, 5));

	return (0);
}
