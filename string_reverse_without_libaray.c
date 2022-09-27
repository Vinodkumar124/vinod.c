#include<stdio.h>
int main()
{
	char str[30],i,j;
	printf("enter your string= ");
	gets(str);
	puts(str);
	printf("size is= ");
	for(i=0;str[i];i++);
		printf("%d\n",i);
		printf("reverse string is= ");
			for(j=i-1;j>=0;j--)
			{
				printf("%c ",str[j]);
			}
	
}
