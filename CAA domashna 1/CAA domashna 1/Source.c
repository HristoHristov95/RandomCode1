#include<stdio.h>
int main()
{
	int counter = 0, current1 = 0, current2 = 0,current3=0,temporary=0,current4=0,temporary1=4;
	int matrix[5][5] = { { 5, 5, 5, 5, 5 }, { 5, 5, 5, 5, 5 }, { 5, 5, 5, 5, 5 }, { 5, 5, 5, 5, 5 }, { 5, 5, 5, 5, 5 } };
	int checker[12];
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			current1 += matrix[i][k];
			current2 += matrix[k][i];
			if (temporary < 5)
			{
				current3 += matrix[temporary][temporary];
				temporary++;
			}
			if (temporary1 >=0)
			{
				current4 += matrix[temporary1][temporary1];
				temporary1--;
			}
		}
		checker[counter++] = current1;
		checker[counter++] = current2;
		if (temporary == 5)
		{
			checker[counter++] = current3;
			temporary = 6;
		}
		if (temporary1 == -1)
		{
			checker[counter++] = current4;
			temporary1 = -2;
		}
		current1 = current2 = 0;
	}
	for (int i = 0; i < 11; i++)
	{
		if (checker[i] == checker[i + 1])
		{
			continue;
		}
		else
		{
			printf("It is not a magical cube !\n");
			return 0;
		}
	}
	printf("It is a magical cube !\n");
	return 0;
}