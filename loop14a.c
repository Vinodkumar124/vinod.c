//c program to find sum of digit of a number
#include<stdio.h>
int main()
{
	int n,last,sum;
	printf("enter number = ");
	scanf("%d",&n);
	while(n>0){
		last=n%10;
		sum=sum+last;
		n=n/10;
	}
	printf("sum of digit =%d",sum);
	
}
