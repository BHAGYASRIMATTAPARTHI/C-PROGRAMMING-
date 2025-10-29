#include<stdio.h>
int main()
{
	int x,ts,tn;
	printf("enter tn,ts values::");
	scanf("%d%d",&tn,&ts);
	for(x=1;x<=ts;x++)
	{
		printf("%d * %d = %d\n",x,tn,x*tn);
	}
	return 0;
}
