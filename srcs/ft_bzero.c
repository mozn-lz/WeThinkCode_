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
