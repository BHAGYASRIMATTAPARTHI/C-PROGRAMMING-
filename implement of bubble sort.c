#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("enter array size::");
	scanf("%d",&n);
	printf("enter array values::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+i])
			{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	    }
	}
	printf("\nsorted array::");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
