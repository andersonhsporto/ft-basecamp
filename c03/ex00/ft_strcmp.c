int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	a;
	unsigned char	b;

	while ((*s1 != '\0' && *s2 != '\0' ) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return ((a = *s1) - (b = *s2));
}
