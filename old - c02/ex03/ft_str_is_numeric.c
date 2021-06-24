int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!('9' >= *str && '0' <= *str))
			return (0);
		str++;
	}
	return (1);
}
