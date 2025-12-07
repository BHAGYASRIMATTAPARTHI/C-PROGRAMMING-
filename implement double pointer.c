#include<stdio.h>
int main()
{
	int a=10,*p,**q;
	p=&a;
	q=&p;
	printf("value of a = %d",a);
	printf("\nvalue of p = %d",*p);
	printf("\nvalue of q = %d",**q);
	return 0;
}
