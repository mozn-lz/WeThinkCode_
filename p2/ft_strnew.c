char 	*ft_strnew(size_t size)
{
	char *s[size];

	s = ft_memalloc(size);
	if(s != NUL)
	{
		ft_bzero(s);
		return (s);
	}
	return (NULL);
}
