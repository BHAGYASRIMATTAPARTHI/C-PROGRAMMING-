#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp = fopen("sample.TXT","r");
	if(fp==NULL)
	{
		printf("file doesn't exsist");
		exit(0);
	}
	ch = fgetc(fp);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}
