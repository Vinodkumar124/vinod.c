//convert upper to lower case
#include<stdio.h>
int main()
{
	char a[100],i;
	gets(a);
	puts(a);
	for(i=0;a[i];i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}	printf("%s",a);
}
