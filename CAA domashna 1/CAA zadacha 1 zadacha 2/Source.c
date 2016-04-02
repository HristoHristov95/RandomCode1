#include<stdio.h>
int main()
{
	int maxRow = 0,flag=0,colona=0,red=0,minRow=0;
	int matrix[5][5] = { { 4, 34, 19,6, 33,  }, { 5, 35, 20, 6, 32 }, { 3, 54, 21, 4, 34 }, { 2, 64, 22, 4, 35 }, { 1, 74, 23, 4, 36 } };
	for (int i = 0; i < 5; i++)
	{
		// MAX
		for (int k = 0; k < 5; k++)
		{
			if (matrix[i][k] > matrix[i][maxRow])
			{
				maxRow = k;
				red = i;
			}
		}
		for (int k = 0; k < 5; k++)
		{
			if (matrix[k][maxRow] < matrix[i][maxRow])
			{
				flag = 1;
			}
		}
		if (!flag)
		{
			printf("Element = colona %d , red %d , stoinost %d\n", maxRow, red, matrix[i][maxRow]);
		}
		flag = 0;
		maxRow = 0;
		// MIN 
		for (int k = 0; k < 5; k++)
		{
			if (matrix[i][k] < matrix[i][minRow])
			{
				minRow = k;
				red = i;
			}
		}
		for (int k = 0; k < 5; k++)
		{
			if (matrix[k][minRow] > matrix[i][minRow])
			{
				flag = 1;
			}
		}
		if (!flag)
		{
			printf("Element = colona %d , red %d , stoinost %d\n", minRow, red, matrix[i][minRow]);
		}
	}
	return 0;
}