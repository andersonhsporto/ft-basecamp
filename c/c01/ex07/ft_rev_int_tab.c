void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	temp;

	i = 0;
	a = size - 1;
	while (i < a)
	{
		temp = tab[i];
		tab[i] = tab[a];
		tab[a] = temp;
		i++;
		a--;
	}
}
