#include<stdio.h>
int main()
{
	char str[100],value;int i;
	puts("enter your string = ");
	gets(str);
	puts(" your string is= ");
	puts(str);
	printf("enter a character you want possiti= ");
		scanf("%c",&value);

	for(i=0;str[i];i++)
	{
		if(str[i]==value)
		{printf(" posstion is= %d",i);
		}
	}
	
}
