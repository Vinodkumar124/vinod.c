//write a cprogram to enter a number and its reverse
#include<stdio.h>
int main()
{
	int n,r;
	printf("enter number= ");
	scanf("%d",&n);
	printf("reverse number is= ");
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	
	
}
