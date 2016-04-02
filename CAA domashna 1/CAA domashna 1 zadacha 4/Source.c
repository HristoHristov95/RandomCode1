#include<stdio.h>
int main()
{
	int matrix[20] = {1,3,2,5,4,7,6,9,8,11,10,13,11,15,12,17,16,19,18,20};
	for (int i = 0; i < 20-1; i+=2)
	{
		if (matrix[i]<matrix[i + 1] && matrix[i + 1]>matrix[i + 2])
		{
			continue;
		}
		else
		{
			printf("Ne e izpulneno uslovieto !\n");
			return 0;
		}
	}
	printf("Izpulneno e uslovieto !\n");
	return 0;
}