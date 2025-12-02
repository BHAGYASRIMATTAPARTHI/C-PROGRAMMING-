#include<stdio.h>
void display(int []);
int main()
{
	int a[5],i;
	printf("enter array values::");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	display(a);
	return 0;
}
void display(int a[5])
{
	int i;
	printf("Display array values::\n");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
