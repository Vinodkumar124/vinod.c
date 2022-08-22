//print the factorial number n

#include<stdio.h>
int main()
{
	int n ;
	printf("enter number : ");
	scanf("%d",&n);
	int fact = 1 ;
	for(int i =1 ; i<=n ; i = i +1 )
	{ fact = fact * i ;
	}
	printf("final factorial is :%d\n" , fact);
}
