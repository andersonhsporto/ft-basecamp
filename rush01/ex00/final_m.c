void final_m(int matrix[6][6], int side[20])
{

	matrix[0][0] = 0;
	matrix[0][1] = side[0];//colup1
	matrix[0][2] = side[1];//colup2
	matrix[0][3] = side[2];//colup3
	matrix[0][4] = side[3];//colup4
	matrix[0][5] = 0;
	matrix[1][0] = side[8];//rowlf1
	matrix[1][1] = 0;
	matrix[1][2] = 0;
	matrix[1][3] = 0;
	matrix[1][4] = 0;
	matrix[1][5] = side[12];//rowrg1
	matrix[2][0] = side[9];//rowlf2
	matrix[2][1] = 0;
	matrix[2][2] = 0;
	matrix[2][3] = 0;
	matrix[2][4] = 0;
	matrix[2][5] = side[13];//rowrg2
	matrix[3][0] = side[10];//rowlf3
	matrix[3][1] = 0;
	matrix[3][2] = 0;
	matrix[3][3] = 0;
	matrix[3][4] = 0;
	matrix[3][5] = side[14];//rowrg3
	matrix[4][0] = side[11];//rowlf4
	matrix[4][1] = 0;
	matrix[4][2] = 0;
	matrix[4][3] = 0;
	matrix[4][4] = 0;
	matrix[4][5] = side[15];//rowrg4
	matrix[5][0] = 0,
	matrix[5][1] = side[4];
	matrix[5][2] = side[5];
	matrix[5][3] = side[6];
	matrix[5][4] = side[7];
	matrix[5][5] = 0;
}
