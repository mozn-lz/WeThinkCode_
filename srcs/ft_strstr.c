char	*ft_strstr(const char *stack, const char *needle)
{
	int i;
	int j;
	char *nstack;

	i = 0;
	j = 0;
	nstack = (char*)stack;
	while (stack[i++])
	{
		j = 0;
		while (stack[i + j] == needle[j])
			if (needle[j++] == '\0')
				return (&nstack[i]);
	}
	return (NULL);
}
