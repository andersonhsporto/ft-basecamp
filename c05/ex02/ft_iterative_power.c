int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 1;
	while (i < power)
	{
		nb = nb * n;
		i++;
	}
	return (nb);
}
