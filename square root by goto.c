#include<stdio.h>
#include<math.h>
int main()
{
	int n,s;
	hi:
		printf("enter n vaule::");
		scanf("%d",&n);
		if(n<0)
		goto hi;
		s=sqrt(n);
		printf("square root = %d",s);
		return 0;
}
