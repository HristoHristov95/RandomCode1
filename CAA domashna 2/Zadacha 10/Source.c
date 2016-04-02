#include<stdio.h>
int recursion(int N,int counting)
{
	if (counting < N)
	{
		return recursion(N,counting+1);
	}
	else
	{
		return counting * 2;
	}
}
int main()
{
	int N = 9;
	int counting = 1;
	printf("%d ", recursion(N, counting));
}