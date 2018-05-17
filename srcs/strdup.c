char *strdup(const char *s)
{
	int i;
	char *rtn

	i = 0;
	while (s)
		i++;
	if ( rtn = (char *)malloc(sizeof(int) * i))
		return rtn;
	else
		return (NULL);
}
