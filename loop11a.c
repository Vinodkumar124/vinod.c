//c program to find first digit of a number and lasr digit of number
#include<stdio.h>
int main()
{
	int n,last;
	printf("enter number= ");
	scanf("%d",&n);
	last=n%10;
	printf("last number is= %d\n",last);
	while(n>=10){
		n=n/10;
	} 
	printf("first number is= %d",n);
}
