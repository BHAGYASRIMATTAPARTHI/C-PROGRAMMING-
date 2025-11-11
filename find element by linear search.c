#include<stdio.h>
int main()
{
	int a[100],i,n,x,flag=0;
	printf("enter array size::");
	scanf("%d",&n);
	printf("enter array values::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element::");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			printf("element found");
			flag = 1;
		}
	}
	if(flag==0)
	printf("element not found");
	return 0;
}
