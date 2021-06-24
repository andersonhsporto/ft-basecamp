void num4(int matrix[6][6])
{

//colup
	int i = 0; //linha
	int j = 0; //coluna

	i = 0; //row
	j =1; // colun

	while (j > 0 && j <=5)
	{
		if (matrix[0][j] == 4)
		{
			matrix[1][j] = 1;
			matrix[2][j] = 2;
			matrix[3][j] = 3;
			matrix[4][j] = 4;
		}
		else if (matrix[0][j] == 1)
		{
			matrix[1][j] = 4;
		}
		else if(matrix[0][j] == 3 && matrix[5][j] == 2)
		{
			matrix[3][j] = 4;
		}
		j++;
	}

	//coldown
	i = 0; // row
	j = 1; // colun

	while (j > 0 && j <=5)
	{
		if (matrix[5][j] == 4)
		{
			matrix[1][j] = 4;
			matrix[2][j] = 3;
			matrix[3][j] = 2;
			matrix[4][j] = 1;
		}
		else if (matrix[0][j] == 1)
		{
			matrix[1][j] = 4;
		}
		else if(matrix[5][j] == 3 && matrix[0][j] == 2)
		{
			matrix[2][j] = 4;
		}
		j++;
	}

	//rowright
	i = 1; //row
	j = 0; // colun

	while (i > 0 && i <=5)
	{

		if (matrix[i][0] == 4)
		{
			matrix[i][1] = 1;
			matrix[i][2] = 2;
			matrix[i][3] = 3;
			matrix[i][4] = 4;
		}
		else if (matrix[0][j] == 1)
		{
			matrix[1][j] = 4;
		}
		else if(matrix[i][0] == 3 && matrix[i][5] == 2)
		{
			matrix[i][3] = 4;
		}
		i++;
	}

	//rowright
	i = 0; // row
	j = 1; // colun

	while (j > 0 && j <=5)
	{
		if (matrix[i][5] == 4)
		{
			matrix[i][1] = 4;
			matrix[i][2] = 3;
			matrix[i][3] = 2;
			matrix[i][4] = 1;
		}
		if (matrix[0][j] == 1)
		{
			matrix[1][j] = 4;
		}
		if	(matrix[i][5] == 3 && matrix[i][0] == 2)
		{
			matrix[i][2] = 4;
		}
		j++;
	}

	//col !=4 print

	i = 0;
	j = 1;
	while (j > 0 && j <=5)
	{
		if (matrix[1][j] != 4 && matrix[2][j] != 4 && matrix[3][j] != 4 && matrix[4][j] != 4  )
		{
			i = 1;
			while (i < 5)
			{
				if (matrix[i][1] != 4 && matrix[i][2] != 4 &&matrix[i][3] != 4 &&matrix[i][4] != 4)
				{
					matrix[i][j] = 4;
				}
				i++;
			}
		}
		j++;
	}
}
