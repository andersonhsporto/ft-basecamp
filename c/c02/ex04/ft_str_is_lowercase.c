int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!('a' <= *str && 'z' >= *str))
			return (0);
		str++;
	}
	return (1);
}
