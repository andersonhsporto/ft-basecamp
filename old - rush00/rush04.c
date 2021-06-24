#include<unistd.h>
void	ft_putchar (char c);

void	get_char (int lin, int col, int x, int y)
{
	if ((lin == 1 && col == 1) || (lin == y && col == x && y > 1 && x > 1))
	{
		ft_putchar('A');
	}
	else if ((lin == 1 && col == x) || (lin == y && col == 1))
	{
		ft_putchar('C');
	}
	else if (lin > 1 && col > 1 && lin != y && col != x)
	{
		ft_putchar(32);
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush (int x, int y)
{
	int	lin;
	int	col;

	if (x < 1 || y < 1)
	{
		write(1, "Please enter valid values (larger than 0) for x and y.\n", 56);
	}
	else
	{
		lin = 1;
		while (lin <= y)
		{
			col = 1;
			while (col <= x)
			{
				get_char(lin, col, x, y);
				col++;
			}
			ft_putchar(10);
			lin++;
		}
	}
}
