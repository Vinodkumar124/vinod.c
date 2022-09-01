//c program to print all factors of a number
#include<stdio.h>
int main()
{int n;
printf("enter number = ");
scanf("%d",&n);
printf("number factors %d is= \n",n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{printf("%d ",i);
		}
	}
	
	
}
