#include<stdio.h>
#include<stdlib.h>
int main()
{
		int flag = 1;
		int temp = 7;
		int temporary = 0;
		int a[8][8] = { {1,2,3,4,5,6,7,8}, {28,29,30,31,32,33,32,9}, {27,18,17,16,15,14,31,10}, {26,19,6,5,4,13,30,11}, {25,20,7,2,3,12,29,12}, {24,21,8,9,10,11,28,13}, {23,22,23,24,25,26,27,14}, {22,21,20,19,18,17,16,15} };
		int counter = 1;
		int down = 0, left = 0, right = 1, up = 0;
		int max = 8 * 8;
		int current = 0;
		int row = 0, colum = 0;
		int k = 0;
		for (;;)
		{
			for (int i = k; i<temp; i++)
			{
				if (temporary < (64 / 2))
				{
					if (down == 1)
					{
						if (a[row][colum] < a[row+1][colum])
						{
							row++;
							temporary++;
							continue;
						}
						else
						{
							flag = 0;
							temporary++;
							continue;
						}
					}
					if (right == 1)
					{
						if (a[row][colum] < a[row][colum+1])
						{
							colum++;
							temporary++;
							continue;
						}
						else
						{
							flag = 0;
							temporary++;
							continue;
						}
					}
					if (up == 1)
					{
						if (a[row][colum] < a[row-1][colum])
						{
							row--;
							temporary++;
							continue;
						}
						else
						{
							flag = 0;
							temporary++;
							continue;
						}
					}
					if (left == 1)
					{
						if (a[row][colum] < a[row][colum-1])
						{
							colum--;
							temporary++;
							continue;
						}
						else
						{
							flag = 0;
							temporary++;
							continue;
						}
					}
				}
				else
				{
					if (down == 1)
					{
						if (a[row][colum] > a[row+1][colum])
						{
							row++;
							temporary++;
							continue;
						}
						else
						{
							flag = 0;
							temporary++;
							continue;
						}
					}
					if (right == 1)
					{
						if (a[row][colum] > a[row][colum+1])
						{
							colum++;
							temporary++;
							continue;
						}
						else
						{
							flag = 0;
							temporary++;
							continue;
						}
					}
					if (up == 1)
					{
						if (a[row][colum] > a[row-1][colum])
						{
							row--;
							temporary++;
							continue;
						}
						else
						{
							flag = 0;
							temporary++;
							continue;
						}
					}
					if (left == 1)
					{
						if (a[row][colum] > a[row][colum - 1])
						{
							colum--;
							temporary++;
							continue;
						}
					}
				}
			}
			if (temporary >= (max-1))
			{
				break;
			}
			if (down == 1)
			{
				left = 1;
				down = 0;
				continue;
			}
			if (right == 1)
			{
				down = 1;
				right = 0;
				if (k % 2 == 0 && temp % 2 != 0)
				{
					temp++;
					k++;
				}
				else
				{
					k++;
				}
				continue;
			}
			if (up == 1)
			{
				right = 1;
				up = 0;
				continue;
			}
			if (left == 1)
			{
				up = 1;
				left = 0;
				k++;
				continue;
			}
		}
		if (flag)
		{
			printf("Trionoobrazna e !\n");
		}
		else
		{
			printf("Ne e trionoobrazna !\n");
		}
	return 0;
}