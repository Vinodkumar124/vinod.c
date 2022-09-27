//upper and lower case sat m
#include<stdio.h>
int main()
{
	char a[100],i,j;
	gets(a);
	puts(a);
	for(i=0;a[i];i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
		printf("%s",a);
  for(j=0;a[j];j++)
    {
    	if(a[j]>=97&&a[j]<=122)
    	{
    		a[j]=a[j]-32;
		}
	}
printf("\n%s",a);
}
