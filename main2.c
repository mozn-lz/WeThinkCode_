#include <stdio.h>
#include "libft.h"

int main()
{
//	char *name	= "WeThinkCode_\n";
/*	ft_putchar(char c)
	ft_putnbr(int n)
	ft_putchar(char c);
	ft_putstr(char *str)
	
	ft_putnbr(ft_atoi("500"));
	//ft_putstr("___FT_IS___\n");
	ft_putnbr(65);
	ft_putnbr(ft_isalnum(93));
	ft_putnbr(ft_isalpha(42));
	ft_putnbr(ft_isascii(300));
	ft_putnbr(ft_isdigit(30));
	ft_putnbr(ft_isprint(1));
*/
/*	
	ft_putstr("___FT_MEM___\n");
	ft_bzero(void *s, size_t n)
	*ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
	*ft_memchr(const void *s, int c, size_t n)
	ft_memcmp(const void *s1, const void *s2, size_t n)
	*ft_memcpy(void *dest, const void *src, size_t n)
	*ft_memmove(void *dest, const void *src, size_t len)
	*ft_memset(void *b, int c, size_t len)
*/	

//	ft_putstr("___FT_STRING___\n");
//	char s1[] = "Hello"; char s2[] = " World";

//	ft_putstr (ft_strcat(s1, s2));
//	ft_putstr(">>>");
//	char s[] = "Awesome";// int n = 5;

//	print = (strchr(s, n));
//	ft_putstr(print);

//	s1 = "Hero"; s2 = " Cup";
//	printf("%d", ft_strcmp(s1, s2));
 //  char str1[15];
 //  char str2[15];
  // int ret;


 //  strcpy(str1, "ABCDEF");
 //  strcpy(str2, "ABCDeF");

//   ret = ft_strcpy(str1, str2);

//	char dest[] = "gogog"; char src[] = "gfr";
//	printf("%s", ft_strcpy(dest, src));
	
	char s[] = "Awesome";
//	printf("%s", ft_strdup(s));
	
	char dest[] = "Brilliant"; int destsize = strlen(s);
	printf("sr %u", strlcat(dest, s, destsize));
	printf("\n");
	printf("ft_ %lu", ft_strlcat(dest, s, destsize));
	printf("\n");

	
	
//	char s[] = "mklen";
//	printf("%d", ft_strlen(s));


//	ORIGINAL DOES NOT WORK
/* 
	char s1[] = "WeThi"; char s2[] = "nkCode_"; int n = a;
	printf("%s\n", strncat(s1, s2, n));
*/

	return (0);
}