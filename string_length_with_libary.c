// Write a program in C to find the length of a string with using library function.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	puts("welcome in your string= ");
	gets(str);
	puts("your string is= ");
	puts(str);
	printf(" %d ",strlen(str));
}
