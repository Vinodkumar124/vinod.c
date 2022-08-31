//write a c program to print all natural number from 1 to n in reverse using while loop
#include<stdio.h>
int main()
{
	int n;
	printf("enter any number= ");
	scanf("%d",&n);
	printf("reverse no 1 to %d = ",n);
	int i=n;
	while(i>=1){printf("%d " ,i);
	i--;
	}
	
	
}
