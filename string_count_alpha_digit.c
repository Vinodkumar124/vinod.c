//#count total number of aslphabet <digits and special characters
#include<stdio.h>
int main()
{
	char a[100],i,alpha=0,digit=0,special=0;
	puts("enter string= ");
	gets(a);
	puts("string is= ");
	puts(a);
	for(i=0;a[i];i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
			alpha++;
		}
		else if(a[i]>='0'&&a[i]<='9')
		{
			digit++;
		}
		else{
			special++;
		}
	}
	printf("alphabet value is= %d\n",alpha);
		printf("digit value is= %d\n",digit);
			printf("special character value is= %d\n",special);
}
