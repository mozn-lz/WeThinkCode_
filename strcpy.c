#include <stdio.h>
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

char	*ft_strcpy(char *src, char *dest)
{
	int i;
	
	i = 0;
	while (src)
	{
		src[i] = dest[i];
		i++;
	}	\
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	int i;
	
	i = 0;
	while (src)
	{
	//	src[i] = dest[i];
		i++;
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
	
}


int		main(void)
{
	char s1[] = "lord";
	char s2[] = "Chaos";

	ft_strcat(s1, s2);
	printf("string: %s", s1);

	return (0);
}
