#include<stdio.h>
int recursion(int number,int result)
{
	if ((number / 10) > 1)
	{
		result = number % 10;
		return result+ recursion(number/10,result);
	}
	return number;
}
int main()
{
	int number = 859;
	int result = 0;
	int numb = 0;
	numb=recursion(number,result);
	printf("%d ", numb);
}