//write a c program to find sum of all odd number betwwn 1 to n
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter any number= ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0){printf("%d ",i);
		sum=sum+i;
		}
	}
	printf("sum of odd number= %d\n",sum);
	
	
	
	
	
	
}
