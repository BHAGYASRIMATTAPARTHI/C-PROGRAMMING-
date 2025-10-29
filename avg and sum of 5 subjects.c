#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,sum;
	float avg;
	printf("enter s1,s2,s3,s4,s5 values ::");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum = s1+s2+s3+s4+s5;
	printf("sum = %d",sum);
	avg = sum /5;
	printf("\naverage = %f",avg);
	return 0;
}
