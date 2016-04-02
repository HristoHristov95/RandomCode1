#include<stdio.h>
int recursion(int array1[],int A, int B,int counter)
{
	int number = 0;
	if (counter !=0)
	{
		if (array1[counter] >= A && array1[counter] <= B)
		{
			number = array1[counter];
			return number+recursion(array1, A, B, counter -1);
		}
	}
	else
	{
		return array1[counter];
	}
	recursion(array1, A, B, counter - 1);
}
int main()
{
	int A = 579;
	int B = 943;
	int counter = 9;
	int array1[10] = {600,645,304,222,896,223,111,581,678,123};
	int result = 0;
	result=recursion(array1,A, B,counter);
	printf("%d \n", result);
}