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

	ft_putstr("___FT_STRING___\n");
	
	char s1[] = "Hello"; char s2[] = " World";
	ft_putstr (ft_strcat(s1, s2));
	ft_putstr(">>>");
	char s[] = "growth"; int n = 5;
	ft_putstr(ft_strchr(s, n));
/*	
	s1[] = "Hero"; s2[] = " Cup";
	ft_putstr(ft_strcmp(s1, s2));
	
	char dest[] = ""; char src[] = "";
	ft_putstr(ft_strcpy(dest, src));
	
	s = "Awesome";
	ft_putstr(ft_strdup(s));
	
	dest = "Brilliant"; int destsize = 5;
	ft_putstr(ft_strlcat(dest, destsize));
	
	s = "Moeketsane";
	ft_putstr(ft_strlen(s));

	s1 = "WeThi"; s2 = "nkCode_"; n = strlen(s2);
	ft_putstr(ft_strncat(s1, s2, n));

	s1 = ""; s2 = "" n = ;
	ft_putstr(ft_strncmp(s1, s2, n));

	dest = "work"; src = "work"; int len = 4;
	ft_putstr(ft_strncpy(dest, src, len));

	char stack[] = "Welcometocapetown"; char needle = "tocape"; len = 10;
	ft_putstr(ft_strnstr(stack, needle, len));

	s = "The Awesomness"; n = 10
	ft_putstr(ft_strrchr(*s, n));

	stack = "do for change"; needle = "for";
	ft_putstr(ft_strstr(stack, needle));
*/
	return (0);
}
