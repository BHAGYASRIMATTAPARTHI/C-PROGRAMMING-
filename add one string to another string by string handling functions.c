#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter string 1 and string 2 names::");
	gets(s1);
    gets(s2);
    strcat(s1,s2);
    printf("merged string = %s",s1);
    return 0;
}
