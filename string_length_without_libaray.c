// Write a program in C to find the length of a string without using library function.
#include<stdio.h>
int main()
{
	char a[100],i;
		puts("welcome in your string= \n ");
	gets(a);
		puts("your string is= \n ");
	puts(a);
	for(i=0;a[i];i++);
	printf(" your string length is= %d ",i);

	
}
