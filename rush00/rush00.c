#include<unistd.h>

void	ft_putchar (char c);

void	get_char (int lin, int col, int x, int y)
{
	if ((lin == 1 || lin == y) && col > 1 && col < x)
	{
		ft_putchar('-');
	}
	else if ((lin == 1 || lin == y))
	{
		ft_putchar('o');
	}
	else if (lin > 1 && col > 1 && lin != y && col != x)
	{
		ft_putchar(32);
	}
	else
	{
		ft_putchar('|');
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
