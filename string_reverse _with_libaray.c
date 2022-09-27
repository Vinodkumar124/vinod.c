//string reverse with libaray function
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],i;
	puts(" enter your string = ");
	gets(a);
	puts("your string is= ");
	puts(a);
//	puts(strrev(a));

printf(" your reverse string is= %s  ",strrev(a));
}
