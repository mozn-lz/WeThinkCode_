void	ft_memdel(void **ap)
{
	free(ap);
	ft_memdel(ft_bzero(ap, sizeof(ap)));
}
