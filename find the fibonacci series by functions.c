#include<stdio.h>
void display(int);
int main()
{
	int n;
	printf("enter size of the series::");
	scanf("%d",&n);
	display(n);
	return 0;
}
void display(int n)
{
	int f=0,s=1,t;
	printf("%d %d",f,s);
	t=f+s;
	while(t<=n)
	{
		printf(" %d",t);
		f=s;
		s=t;
		t=f+s;
	}
}
