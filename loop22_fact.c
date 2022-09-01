//write a program number to find all factors
#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("enter number= ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{fact=fact*i;
	}
	printf("factorian %d is= %d\n",n,fact);
}
