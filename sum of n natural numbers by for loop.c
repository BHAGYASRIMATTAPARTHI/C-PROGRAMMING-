#include<stdio.h>
int main()
{
	int x,n,sum=0;
	printf("enter n value::");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		sum =sum+x;
	}
	printf("sum = %d",sum);
	return 0;
}
