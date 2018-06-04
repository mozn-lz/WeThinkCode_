#include "libft.h"

int main(void)
{
	char	*str = "We think code_";
	char	*as;
	as = ft_strsub(str, 3, 1);
	printf("strsub %s\n", as);
	as = ft_strspilt(str, ' ');
	printf("strsub %s\n", as);

	return (0);
}
