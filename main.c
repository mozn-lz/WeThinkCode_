#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_strlen(char *c);
//char	toupper(char *c);
//char	tolower(char *c);

int main()
{
	char *name	= "WeThinkCode_\n";
//	char *upcase	= "HELLO\n";
//	char *donwcase	= "goodbye\n";
//	char *mixed	= "1g-5a	49(^&# ds_fin\n";
//	char *t_number	= "2018\n";
//	int number	= 2018;

	ft_putstr(name);
	ft_putnbr(ft_strlen(name));
//	ft_putstr(upcase(name));
//	ft_putstr(toupper(name));
//	ft_putstr(tolower(name));
//	strdup();

return (0);
}
