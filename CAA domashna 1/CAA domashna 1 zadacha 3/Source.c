#include<stdio.h>
int main()
{
	int result = 0,counter=0,flag=0,flag1=0,flag2=0,number=0;
	int matrix[6][6] = { { 1,5,2,6,2,5 }, { 5,7,1,3,7,5 }, { 5,7,2,4,1,5 }, { 7,2,7,4,2,5 }, { 1,2,7,1,3,5 } };
	int results[10];
	for (int i = 0; i < (6/2)+1; i++)
	{
		for (int k = i; k < (6-i); k++)
		{
			if (k == i || k == (6 - (i+1)))
			{
				for (int m = i; m < 6-i; m++)
				{
					result += matrix[k][m];
				}
				continue;
			}
			result += matrix[k][i] + matrix[k][6 - (i+1)];
		}
		results[counter++] = result;
		result = 0;
	}
	number = results[1] - results[0];
	for (int i = 0; i < counter-1; i++)
	{
		if (counter >= 3)
		{
			if (results[i + 2] == (results[i + 1] + number))
			{
				if (results[i] < results[i + 1])
				{
					printf("Monotonno rastq6ta !\n");
				}
				if (results[i] > results[i + 1])
				{
					printf("Monotonno namalqva6ta !\n");
				}
				if (results[i] == results[i + 1])
				{
					printf("Monotonna no nito rastq6ta nito namalqva6ta !\n");
				}
			}
		}
		if (counter <= 2)
		{
			if (counter == 1)
			{
				printf("Ne e redica ! \n");
				return 0;
			}
			if (results[i] < results[i + 1])
			{
				printf("Monotonno rastq6ta !\n");
				return 0;
			}
			if (results[i] > results[i + 1])
			{
				printf("Monotonno namalqva6ta !\n");
				return 0;
			}
			if (results[i] == results[i + 1])
			{
				printf("Monotonna no nito rastq6ta nito namalqva6ta !\n");
				return 0;
			}
		}
	}
	printf("Ne e monotonna !\n");
	return 0;
}