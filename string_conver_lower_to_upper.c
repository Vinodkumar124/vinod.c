//convert  lower  to upper  case
#include<stdio.h>
int main()
{
	char a[100],i;
    gets(a);
    puts(a);
    for(i=0;a[i];i++)
    {
    	if(a[i]>=97&&a[i]<=122)
    	{
    		a[i]=a[i]-32;
		}
	}
printf("%s",a);

}
