//Write a program in C to separate the individual characters from a string.
#include<stdio.h>
int main()
{
	char a[100];
	gets(a);
    for(int i=0;a[i];i++)
    {
    		printf("%c ",a[i]);
	}
}
