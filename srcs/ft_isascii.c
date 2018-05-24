#include "libft.h"
int     ft_isascii(char c)
{
    if (c >= 0 && c <= 127)
        return (c);
    else
        return (0);
}
