int	tolower(int c)
{
	if (c <= 90 && c >= 65)
	{
		c -= 32;
		return (char *(c));
	}
	else
		return (c);
}
