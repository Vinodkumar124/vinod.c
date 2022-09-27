#include<stdio.h>
int main()
{
	char a[100],b[100],l,j,c;
	gets(a);
	gets(b);
	l=strlen(a);
	for(j=0;b[j];j++,l++)
		{
			a[l]=b[j];
		}
	
	printf("%s ",a);
}
