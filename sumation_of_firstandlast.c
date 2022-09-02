#include<stdio.h>
int main()
{
	int n,last,first,sum;
	printf("enter number = ");
	scanf("%d",&n);
	last=n%10;
	printf("last value = %d\n",last);
	while(n>0)
	{ first=n%10;
		n=n/10;		
	} printf("first value is =%d\n",first);
	sum=first+last;
	printf("sum is =%d\n",sum);
}
