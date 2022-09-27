#include<stdio.h>
int main()
{
	char a[100],b[100],i;
	gets(a);
	puts(a);
	gets(b);
	puts(b);
	for(i=0;a[i];i++)
	{
		b[i]=a[i];
	}

	printf("%s",b);
}
