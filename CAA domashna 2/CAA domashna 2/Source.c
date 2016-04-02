#include<stdio.h>
char recursion(char array1[],int count)
{
	if (count > 6)
	{
		return;
	}
	else
	{
		 recursion(array1, count + 1);
	}
	printf("%c ", array1[count]);
}
int main()
{
	char array1[] = {'a','b','c','d','e','f','g'};
	int count = 0;
	recursion(array1, count);
	return 0;
}