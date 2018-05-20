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
char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	size_t j;

	i = ft_strlen(s1);
	j = 0;
	while ((s2[j] != '\0') && (j <= n))
	{
		s1[i++] = s2[j++];
	}
	s1[i] = '\0';
	return (s1);
}

size_t		ft_strlcat(char *dest, const char *src, size_t destsize)
{
		return (ft_strlen(ft_strncat(dest, src, destsize)));
}
/*
char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i++] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
	}
}*/
/*char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char stack, const char  *needle);
char	*ft_strnstr(const char * stach, const char *needle, size_t len);
char	*ft_strcmp(const char *s1, const char *s2);
char	*ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
*/
char *ft_strdup(const char *s)
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
	char s3[] = "lord";
	char s4[] = "Chaos";
	char s5[] = "lord";
	char s6[] = "Chaos";
	char s7[] = "lord";
	char s8[] = "Chaos";
	char s9[] = "lord";
	char s10[] = "Chaos";
//	char *str;

//	str =ft_strncat(s1, s2, ft_strlen(s2));
//	printf("strcpy: %s\n", ft_strcat(s1, s2));
	printf("strncat: %s\n", ft_strncat(s1, s2, ft_strlen(s2)));
//	printf("strlcat: %d\n", strlcat(s1, s2, ft_strlen(s2)));
	printf("strlcat_size: %ld\n", ft_strlcat(s3, s4, sizeof(s2)));
	printf("strlcat_len: %ld\n", ft_strlcat(s5, s6, ft_strlen(s2)));
	printf("strlcat_10: %ld\n", ft_strlcat(s7, s8, 10));
	printf("strlcat_3: %ld\n", ft_strlcat(s9, s10, 1));
//	printf("strchr: %s\n", ft_strchr("hello", 5));
	return (0);
}
