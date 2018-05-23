#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *a;

	a = b;
	i = 0;
	while ((a[i] != '\0') && len > 0 )
	{
		a[i] = (unsigned char) c;
		i++;
		len--;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	int i;
	unsigned char *c;

	i = 0;
	c = s;
	if (n > 0)
		while (n-- > 0 )
			c[i++] = '\0';
}


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *a;
	unsigned const char *b;

	i = 0;
	a = dest;
	b = src;
	while (n-- > 0)
	{
		a[i] =  b[i];
		i++;
	}
	return (dest);
}

void	*ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	int i;
	unsigned char *a;
	unsigned const char *b;

	i = 0;
	a = dest;
	b = src;
	while(n-- > 0)
	{
		if (b[i] == (unsigned char)c)
			return (dest);
		else
			a[i] = b[i];
		i++;
	}
	return (dest);
}
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *c_dest;
	char *c_src;
	char *temp;

	c_dest	= (char*)dest;
	c_src	= (char*)src;
	temp = (char*)malloc(sizeof(char)*len);

	ft_memcpy(temp, c_src, len);
	ft_memcpy(c_dest, temp, len);

	free(temp);
	return (dest);
}
void	*ft_memchr(const void *s, int c, size_t n)
{

	int i;
	char *sc;

	i = 0;
	sc = (char*)s;
	while (n-- != 0)
	{
		if (sc[i] == (unsigned char)c)
			return (&sc[i]);
		i++;
	}
	return (NULL);
}

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	char *sc1;
	char *sc2;

	i = 0;
	sc1 = (char*)s1;
	sc2 = (char*)s2;
	while(n-- != 0)
	{
		if (sc1[i] > sc2[i])
			return (1);
		else if (sc1[i] < sc2[i])
			return (-1);
		i++;
	}
	return (0);
}

int		main(void)
{
	//char str[] = "http://42.fr.com";
	//char str2[] = "http://www.wethinkcode.co.za";
	char dest[] = "oldstring";
	const char src[]  = "newstringo";

	printf("1. Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
//	memcpy(dest, src, 9);
	printf("2. After memmove dest = %s, src = %s\n", dest, src);	
	return (0);
}
