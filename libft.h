#include <unistd.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

	int	ft_strlen(char *s);
	void	ft_putchar(char c);
	void	ft_putstr(char *str);
	void	ft_putchar(char c);
	void		ft_putnbr(int n);
	int		ft_atoi(const char *str);
	void	ft_bzero(void *s, size_t n);
	int		ft_isdigit(int c);
	int		ft_isalpha(int c);
	int		ft_isascii(int c);
	int		ft_isprint(int c);
	int		ft_isalnum(int c);
	void	*ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
	void	*ft_memchr(const void *s, int c, size_t n);
	int		ft_memcmp(const void *s1, const void *s2, size_t n);
	void	*ft_memcpy(void *dest, const void *src, size_t n);
	void	*ft_memmove(void *dest, const void *src, size_t len);
	void	*ft_memset(void *b, int c, size_t len);
	char	*ft_strcat(char *restrict s1, const char *restrict s2);
	char	*ft_strchr(const char *s, int c);
//	char	*ft_strchr(const char *s, int c);
	int		ft_strcmp(const char *s1, const char *s2);
	char	*ft_strcpy(char *dest, const char *src);
	char	*ft_strdup(const char *s);
	size_t		ft_strlcat(char *dest, const char *src, size_t destsize);
	char	*ft_strncat(char *s1, const char *s2, size_t n);
	int		ft_strncmp(const char *s1, const char *s2, size_t n);
	char	*ft_strncpy(char *dest, const char *src, size_t len);
	char	*ft_strnstr(const char * stack, const char *needle, size_t len);
	char	*ft_strrchr(const char *s, int c);
	char	*ft_strstr(const char *stack, const char *needle);
