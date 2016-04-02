#include<stdio.h>
int main()
{
	int array[10] = {1,6,0,23,2,0,1,6,0,1};
	int temp = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 9; k++)
		{
			if (array[k] == 0)
			{
				temp = array[k + 1];
				array[k + 1] = 0;
				array[k] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", array[i]);
	}
	return 0;
}