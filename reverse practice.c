#include<stdio.h>
int main()
{
	int n;
	printf("enter number you want reverse = ");
	scanf("%d",&n);
	printf("reverse number is = ");
	while(n>0){
		int r =n%10;
		printf("%d",n);
		n=n/10;	
	}
	
	
}
