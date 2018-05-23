void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *c_dest;
	char *c_src;
	char *temp;

	c_dest	= (char*)dest;
	c_src	= (char*)src;
	temp = (char*)malloc(sizeof(char)*len);

	ft_memcpy(temp, c_src, len);
	ft_memcpy(c_dest, temp, len);

	free(temp);
	return (dest);
}
