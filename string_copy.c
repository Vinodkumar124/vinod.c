#include<stdio.h>
int main()
{
	char a[100],b[100];
	gets(a);
	puts(a);
	gets(b);
	printf("%s",strcpy(b,a));
	
}
