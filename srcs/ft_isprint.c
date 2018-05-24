#include "libft.h"
int     ft_isprint(char c)
{
    if (c >= 32 && c <= 126)
        return (c);
    else
        return (0);
}
