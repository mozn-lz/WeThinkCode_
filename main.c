#include "libft.h"

int		main(void)
{
	char *s1 = "WeThin";
	char *s2 = "kcode_";
	char *s3;

	printf("s2%s\n", s2);

	ft_strjoin(s1, s2);
	printf("s3: %s\n", s1);
	return (0);
}
