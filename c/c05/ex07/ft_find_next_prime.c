int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb) && nb < 2147483647)
		++nb;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i != nb && nb < 2147483647)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
