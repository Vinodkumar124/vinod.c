//c program to find product (multiply)of digits of a number
#include<stdio.h>
int main()
{
	int n,last,mul=1;
	printf("enter number = ");
	scanf("%d",&n);
	while(n>0){
		last=n%10;
		mul=mul*last;
		n=n/10;
	}
	printf("multiply of digit= %d\n",mul);
}
