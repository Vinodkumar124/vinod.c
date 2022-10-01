#include<stdio.h>
int main()
{int i,j,k,f;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{printf("*");}
	
		printf("\n");
	}
		for(k=6-1;k>=1;k--)
	{
		for(f=1;f<=k;f++)
		{
		printf("*");
		}
		printf("\n");
	}
}
