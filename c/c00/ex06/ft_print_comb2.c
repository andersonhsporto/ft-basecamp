#include <unistd.h>

void	ft_print_numbers(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	p;
	int	s;

	p = 0;
	while (p < 100)
	{
		s = p + 1;
		while (s < 100)
		{
			ft_print_numbers(p / 10 + 48);
			ft_print_numbers(p % 10 + 48);
			write(1, " ", 1);
			ft_print_numbers(s / 10 + 48);
			ft_print_numbers(s % 10 + 48);
			if (p != 98)
			{
				write(1, ", ", 2);
			}
			s++;
		}
		p++;
	}
}
