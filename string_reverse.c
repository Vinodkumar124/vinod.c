//reverse string without libary function
#include<stdio.h>

int main()
{
	char a[100],i,j;
	puts("enter your string= ");
	gets(a);
	puts(" your string is= ");
	puts(a);
	for(i=0;a[i];i++);
	printf(" your string length is = %d ",i);
	printf(" your string reverse is =  ");
	for(j=i-1;a[j];j--)	
	{
		printf("%c ",a[j]);
	}
}
