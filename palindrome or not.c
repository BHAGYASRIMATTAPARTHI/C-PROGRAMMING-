#include<stdio.h>
int main()
{
	int x,rev=0,d,temp;
	printf("enter x value::");
	scanf("%d",&x);
	temp=x;
	while(x>0)
	{
		d=x%10;
		rev=rev*10+d;
		x=x/10;
	}
	if(temp = rev)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
	return 0;
}
