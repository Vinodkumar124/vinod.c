//Write a program in C to find the length of a string without using library function.
#include<stdio.h>
int main()
{
	char str[30],i;
	printf("enter your string= ");
	gets(str);
	puts(str);
	for(i=0;str[i];i++);
		printf("%d",i);
	
}
