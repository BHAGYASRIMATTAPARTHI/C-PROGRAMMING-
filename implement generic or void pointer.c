#include<stdio.h>
int main()
{
	int x=50;
	char a='x';
	void *ptr;
	printf("value of ptr = %d",*(int*)ptr);
	ptr=&a;
	printf("\nvalue of ptr = %c",*(char*)ptr);
	return 0;
}
