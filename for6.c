//write a program in c multiplation table of given integer 
#include<stdio.h>
int main()
{
	int n ;
	printf("enter number = ");
	scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		printf("%d X %d =%d\n",n,i,n*i);
	}
}
