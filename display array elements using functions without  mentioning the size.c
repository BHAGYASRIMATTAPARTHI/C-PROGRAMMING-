#include<stdio.h>
void display(int []);
int main()
{
	int a[]={1,2,3,4};
	display(a);
	return 0;
}
void display(int a[])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("%d ",a[i]);
	}
}
