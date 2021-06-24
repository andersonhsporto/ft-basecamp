#include <stdio.h>
#include <stdlib.h>

void num4(int matrix[6][6]);
void num3(int matrix[6][6]);
void num2(int matrix[6][6]);
int	char_int(char *arg, int *side);
void final_m(int matrix[6][6], int side[20]);

int main(int argc, char **argv)// argc conta / argv mostra)
{
	int side[20];
	int matrix[6][6];	
	argc = 2;
	char_int(argv[1], side);


	//char side[] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2,};
	//char side[] = {1, 2, 2, 4, 3, 2, 3, 1, 1, 2, 2, 3, 3, 2, 2, 1,};
	//char side[] = {2, 1, 2, 4, 3, 3, 2, 1, 2, 1, 2, 4, 3, 3, 2, 1,};
	//char side[] = {1, 3, 2, 3, 3, 1, 3, 2, 1, 2, 3, 2, 3, 2, 1, 2,};
	//char side[] = {3, 1, 3, 2, 2, 4, 1, 2, 2, 3, 1, 2, 2, 1, 3, 2,};


	
	
	int i = 0; //linha
	int j = 0; //coluna

	
	final_m(matrix, side);
	num4(matrix);
	num3(matrix);
	num2(matrix);
	num3(matrix);
	num2(matrix);
	
// imprimir matriz
	i = 0;
	j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			printf("%d ", matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
	return (0);
}
