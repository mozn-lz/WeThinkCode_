void	*ft_memalloc(size_t size)
{
	void rtn;

	rtn = (void*)malloc(sizeof(size_t) * size);
	if(rtn)
	{
		ft_memset(rtn, '0',size);
			return (rtn);
	}
	return (NULL);
}
