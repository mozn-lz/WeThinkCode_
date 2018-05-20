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
	char itc;
	char *rtn;
	int i;

	itc = (char) c;
	i = 0;
	while (s[i++] != '\0')
	{
		if (s[i] == itc)
		{
			rtn = s[i];
			return (rtn);
		}
	}
	return (NULL);
}
/*char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char stack, const char  *needle);
char	*ft_strnstr(const char * stach, const char *needle, size_t len);
char	*ft_strcmp(const char *s1, const char *s2);
char	*ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
*/

int		main(void)
{
//	char s1[] = "lord";
	char s2[] = "Chaos";
	int	 i1 = 67;
	int i2 = 65;

//	str =ft_strncat(s1, s2, ft_strlen(s2));
//	printf("strcpy: %s\n", ft_strcat(s1, s2));
//	printf("strlcat_size: %ld\n", ft_strlcat(s3, s4, sizeof(s2)));
	printf("strchr: %s\n", ft_strchr(s2, i1));
	printf("strchr: %s\n", ft_strchr(s2, i2));
/*
  	printf("strlcat_len: %ld\n", ft_strlcat(s5, s6, ft_strlen(s2)));
	printf("strlcat_10: %ld\n", ft_strlcat(s7, s8, 10));
	printf("strlcat_3: %ld\n", ft_strlcat(s9, s10, 1));
	printf("strchr: %s\n", ft_strchr("hello", 5));
*/
	return (0);
}
