#include<stdio.h>
int main()
{
//	sum of first natural number
int n ;
printf("enter number : ");
scanf("%d" ,&n);
int sum =0;
for(int i=1 ;i<=n ;i++)	{ 
	sum =sum +i;
}
	printf("first natural number sum : %d"  ,sum);
	
}
