#include <unistd.h>

void	ft_print_numbers(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c < 58)
			{
				ft_print_numbers(a, b, c);
				if (a == 55 && b == 56 && c == 57)
					write(1, "", 0);
				else
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
