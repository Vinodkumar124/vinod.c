// Write a program in C to count the total number of words in a string
#include<stdio.h>
int main()
{
	char str[100],i,w=0;
    puts("enter your string= ");
    gets(str);
    puts(" your string is= ");
    puts(str);
    for(i=0;str[i];i++)
    {
    	if(str[i]==' '){
    		w++;
		}
	}
	printf("%d ",w+1);
}

