//Sort a string array in ascending order

#include<stdio.h>
int main()
{
	char a[100],i,j,temp=0;
	puts("enter your string= ");
	gets(a);
	puts("your string is= ");
	puts(a);

	for(i=0;a[i];i++)
	{
		for(j=i+1;a[j];j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
printf(" your accending orrder string is= %s",a);
}
