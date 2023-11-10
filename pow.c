#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if((n&(n-1))==0)
	{
		printf("it is power of 2");
	}
	else
	{
	printf("it is not power of 2");
	}
}
