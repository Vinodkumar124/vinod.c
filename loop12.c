//program first and last digit sum
#include<stdio.h>
int main()
{
int n,last,sum;
printf("enter number = ");
scanf("%d",&n);
last=n%10;
printf("last number is= %d\n",last);
while(n>=10){
	n=n/10;
}	
printf("first number is= %d\n",n);	
sum=last+n;
printf("sum is first and last digit= %d\n",sum);
}
