#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void *memset(void *b, int c, size_t len)
{
	size_t i;
	char *a;

	a = (char*)b;
	i = 0;
	while (a[i] != '\0' && i <= len )
		a[i++] = c;
	return (b);
}
/*
void	bzero(void *s, size_t n)
{
	int i;

	i = 0;
	if (n > 0)
		while (s[i] != '\0' && i <= n )
			s[i++] = '\0';
}

void	*memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	int i;

	i = 0;
	while (dest[i] != '\0' && i <= n)
		dest[i] = src[i++];
	return (dest);
}
void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{}
void	*memmove(void *dst, const void *src, size_t len)
{}
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);
*/
int		main(void)
{
	//int i = 162;
	char *b = "Tshiwela";
	int c;

	printf("%s", memset(b, 'l', 8));
	
//	printf("is = %d\n\n", isalpha(i));
//	printf("ft = %d\n\n", ft_isalpha(i));
	
	return (0);
}
