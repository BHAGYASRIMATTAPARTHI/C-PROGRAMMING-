#include<stdio.h>
int main()
{
	int x,d,rev=0;
	printf("enter any number::");
	scanf("%d",&x);
	while(x>0)
	{
		d=x%10;
		rev=rev*10+d;
		x=x/10;
	}
	printf("rev=%d",rev);
	return 0;
}
