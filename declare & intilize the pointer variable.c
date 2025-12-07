#include<stdio.h>
int main()
{
	int a,*p;
	a=10;
	p=&a;
	printf("value of a = %d",a);
	printf("\naddress of a = %u",p);
	printf("\naddress of p = %u",&p);
	printf("\nvalue of p = %d",*p);
	return 0;
}
