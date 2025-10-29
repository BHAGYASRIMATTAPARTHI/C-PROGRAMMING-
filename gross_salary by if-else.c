#include<stdio.h>
int main()
{
	int bs,da,hra,gs;
	printf("enter bs value::");
	scanf("%d",&bs);
	if(bs>=1000)
	{
		da=10%bs;
		hra=15%bs;
	}
	else
	{
		da=15%bs;
		hra=20%bs;
	}
	gs = bs+da+hra;
	printf("GROSS_SALARY=%d",gs);
	return 0;
}
