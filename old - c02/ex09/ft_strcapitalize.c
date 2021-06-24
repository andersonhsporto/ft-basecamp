char	*ft_strcapitalize(char *str)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (str[a] != '\0')
	{
		if (i == 0 && (str[a] >= 'a' && str[a] <= 'z'))
		{
			str[a] -= 32;
			i++;
		}
		else if (i > 0 && (str[a] >= 'A' && str[a] <= 'Z'))
			str[a] += 32;
		else if ((str[a] < '0') || (str[a] > '9' && str[a] < 'A') || (str[a] > 'Z' && str[a] < 'a') || (str[a] > 'z'))
			i = 0;
		else
			i++;
		a++;
	}
	return (str);
}
