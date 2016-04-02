#include<stdio.h>
int main()
{
	int broi = 0, temp = 0;
	int flag = 0;
	int counter = 0,counter1=0;
	int array[16] = {7,6,5,4,3,2,1,3,2,1,5,4,3,1,2,3};
	int length[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, maxLenth = 0;
	printf("Elements : ");
	for (int i = 0; i < 16-1; i++)
	{
		for (int k = counter; k < 16 - 1; k++)
		{
			if (array[k]>array[k + 1])
			{
				printf("%d ,", array[k]);
				counter1++;
				flag = 1;
				continue;
			}
			else
			{
				if (flag)
				{
					printf("%d \n", array[k]);
					broi++;
				}
				flag = 0;
				k++;
				length[temp++] = counter1;
				counter = k;
				counter1 = 0;
				break;
			}
		}
	}
	printf("Broi na vsi4ki redici : %d\n", broi);
	maxLenth = length[0];
	for (int i = 0; i < 16; i++)
	{
		if (length[i] == 0)
		{
			break;
		}
		for (int k = 0; k < 16; k++)
		{
			if (maxLenth < length[k])
			{
				maxLenth = length[k];
			}
		}
		printf("duljina na redica %d : %d\n", i, length[i]);
	}
	printf("Redica s maksimalna duljina : %d \n", maxLenth);
	return 0;
}