char *ft_strdup(const char *s)
{
	int i;
	char *rtn;

	i = 0;
	while (s[i])
		i++;
	rtn = (char *)malloc(sizeof(char ) * i);
	if (rtn)
	{
		return (ft_strcpy(rtn, s));
	}
	else
		return (NULL);
}

