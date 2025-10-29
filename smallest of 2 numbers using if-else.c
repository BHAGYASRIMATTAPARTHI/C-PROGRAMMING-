#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x,y values::");
	scanf("%d%d",&x,&y);
	if(x<y)
	{
		printf("x is small");
	}
	else
	{
		printf("y is small");
	}
	return 0;
}
