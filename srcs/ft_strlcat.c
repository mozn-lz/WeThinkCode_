size_t		ft_strlcat(char *dest, const char *src, size_t destsize)
{
		return (ft_strlen(ft_strncat(dest, src, destsize)));
}
