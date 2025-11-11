#include<stdio.h>
int main()
{
	int a[200],n,i,sum=0;
	printf("enter array size::");
	scanf("%d",&n);
	printf("enter array values::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum = sum +a[i];
	}
	printf("sum of array values = %d",sum);
	return 0;
}
