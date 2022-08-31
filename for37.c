//write a program in c to display the number in reverse order
#include<stdio.h>
int main()
{
	int n,r;
	printf("enter any number u want reverse = ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
		
		
	}
	
	
	
	
}
