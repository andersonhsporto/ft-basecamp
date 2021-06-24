void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_1;
	int	temp_2;

	temp_1 = *a;
	temp_2 = *b;
	*a = temp_1 / temp_2;
	*b = temp_1 % temp_2;
}
