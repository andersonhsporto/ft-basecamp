void num2(int matrix[6][6])
{
//print 2

	//colup
	int i = 0; //linha
	int j = 0; //coluna

	i = 0; // row
	j = 1; // colun

	while (j > 0 && j <=5)
	{
		if (matrix[0][j] == 2 && matrix[3][j] == 4 && matrix[4][j] == 3)
		{	
			matrix[1][j] = 2;
			matrix[2][j] = 1;
		}
		else if (matrix[0][j] == 3 && matrix[3][j] == 4 && matrix[4][j] == 3)
		{	
			matrix[1][j] = 1;
			matrix[2][j] = 2;
		}
		else if (matrix[0][j] == 3 && matrix[3][j] == 3 && matrix[4][j] == 4)
		{	
			matrix[1][j] = 2;
			matrix[2][j] = 1;
		}
		j++;

	}

	//coldown
	i = 0; // row
	j = 1; // colun

	while (j > 0 && j <=5)
	{
		if (matrix[5][j] == 2 && matrix[2][j] == 4 && matrix[1][j] == 3)
		{	
			matrix[4][j] = 2;
			matrix[3][j] = 1;
		}
		else if (matrix[5][j] == 3 && matrix[2][j] == 4 && matrix[1][j] == 3)
		{	
			matrix[4][j] = 1;
			matrix[3][j] = 2;
		}
		else if (matrix[5][j] == 3 && matrix[2][j] == 3 && matrix[1][j] == 4)
		{	
			matrix[4][j] = 2;
			matrix[3][j] = 1;
		}
		j++;
	}

	//rowleft
	i = 1; // row
	j = 0; // colun

	while (i > 0 && i <=5)
	{
		if (matrix[i][0] == 2 && matrix[i][3] == 4 && matrix[i][4] == 3)
		{	
			matrix[i][1] = 2;
			matrix[i][2] = 1;
		}
		else if (matrix[i][0] == 3 && matrix[i][3] == 4 && matrix[i][4] == 3)
		{	
			matrix[i][1] = 1;
			matrix[i][2] = 2;
		}
		else if (matrix[i][0] == 3 && matrix[i][3] == 3 && matrix[i][4] == 4)
		{	
			matrix[i][1] = 2;
			matrix[i][2] = 1;
		}
		i++;
	}

	//rowright
	i = 1; // row
	j = 0; // colun

	while (i > 0 && i <=5)
	{
		if (matrix[i][5] == 2 && matrix[i][2] == 4 && matrix[i][1] == 3)
		{	
			matrix[i][4] = 2;
			matrix[i][3] = 1;
		}
		else if (matrix[i][5] == 3 && matrix[i][2] == 4 && matrix[i][1] == 3)
		{	
			matrix[i][4] = 1;
			matrix[i][3] = 2;
		}
		else if (matrix[i][5] == 3 && matrix[i][2] == 3 && matrix[i][1] == 2)
		{	
			matrix[i][4] = 2;
			matrix[i][3] = 1;
		}
		i++;
	}


//colup
	i = 0; // row
	j = 1; // colun

	while (j > 0 && j <=5)
	{
		if (matrix[0][j] == 2 && matrix[2][j] == 4 && matrix[3][j] == 1 && matrix[4][j] == 2)
		{	
			matrix[1][j] = 3;
		}
		j++;

	}

//print 3

	//coldown
	i = 0; // row
	j = 1; // colun

	while (j > 0 && j <=5)
	{

		if (matrix[5][j] == 2 && matrix[3][j] == 4 && matrix[2][j] == 1 && matrix[1][j] == 2)
		{	
			matrix[4][j] = 3;
		}
		j++;
	}

	//rowleft
	i = 1; // row
	j = 0; // colun

	while (i > 0 && i <=5)
	{
		if (matrix[i][0] == 2 && matrix[i][2] == 4 && matrix[i][3] == 1 && matrix[i][4] == 2)
		{	
			matrix[i][1] = 3;
		}
		i++;
	}

	//rowright
	i = 1; // row
	j = 0; // colun

	while (i > 0 && i <=5)
	{
		if (matrix[i][5] == 2 && matrix[i][3] == 4 && matrix[i][2] == 1 && matrix[i][1] == 2)
		{	
			matrix[i][4] = 3;
		}
		i++;
	}
}
