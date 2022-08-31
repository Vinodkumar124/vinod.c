//display the n term of fibonachi series
#include<stdio.h>
int main()
{
	int n,first=0,second=1,third,sum=0;
	printf("enter n term you want febonachi series= ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{ printf("%d ",first) ;
	third=first+second;
	first=second;
	second=third;
	
	}
	
	
	
	
	
	
	
}
