#include<stdio.h>
int main()
{
	int x=15;
	int *ptr=NULL;
	if(ptr==NULL)
	ptr=&x;
	printf("value of ptr=%d",*ptr);
	return 0;
}
