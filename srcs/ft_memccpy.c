void	*ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	int i;
	unsigned char *a;
	unsigned const char *b;

	i = 0;
	a = dest;
	b = src;
	while(n-- > 0)
	{
		if (b[i] == (unsigned char)c)
			return (dest);
		else
			a[i] = b[i];
		i++;
	}
	return (dest);
}
