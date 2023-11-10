#include<stdio.h>
int main()
{
	int n,bit,count=0,i,var=5;
	printf("enter value"); 
	scanf("%d",&n);
	for(i=7;i>=0;i--)
	{
	if(n>>i&1==1)
	{
		count++;
	}
	}
	printf("%d\n",count);
	for(i=0;i<count;i++)
	{
	var=var<<i;
	}
	printf("%d",var);
}
