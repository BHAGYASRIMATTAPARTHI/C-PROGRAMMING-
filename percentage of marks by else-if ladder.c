#include<stdio.h>
int main()
{
	int a,b,c,t,per;
	printf("enter a,b,c values::");
	scanf("%d%d%d",&a,&b,&c);
	t=a+b+c;
	per=t/3;
	if(a>=35&&b>=35&&c>=35)
	{
		if(per>=90)
		printf("A");
		else if(per>=70)
		printf("B");
		else if(per>=50)
		printf("C");
		else if(per>=40)
		printf("D");
	}
	else 
	printf("failed");
	return 0;
}
