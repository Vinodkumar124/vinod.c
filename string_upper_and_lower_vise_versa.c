//convert upper and lower into vise versa
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
		else if(a[i]>=97&&a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
}
