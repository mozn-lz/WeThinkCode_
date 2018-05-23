void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *a;

	a = b;
	i = 0;
	while ((a[i] != '\0') && len > 0 )
	{
		a[i] = (unsigned char) c;
		i++;
		len--;
	}
	return (b);
}
