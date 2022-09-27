#include<stdio.h>
int main()
{
	char a[100],value,i,count=0;
	gets(a);
	puts(a);
	printf("enter a character u want frequency= ");
	scanf("%c",&value);
	for(i=0;a[i];i++)
	{
		if(a[i]==value)
		{
			count++;
		}
	}
	printf("%d",count);
}
