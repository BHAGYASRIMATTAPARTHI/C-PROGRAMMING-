#include<stdio.h>
void mul(int , int);
int main()
{
	int a=3,b=4;
	mul(a,b);
	return 0;
}
void mul(int a,int b)
{
	int c;
	c=a*b;
	printf("multiplication = %d",c);
}
