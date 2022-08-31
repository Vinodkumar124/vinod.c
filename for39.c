//Find the number and sum of all integer between 100 and 200, divisible by 9
#include<stdio.h>
int main()
{  int sum=0; 
 printf("from 100 to 200 all number divisible ny 9= ");
	for(int i=100;i<=200;i++)
	{
		if(i%9==0){ printf("%d ",i);
		sum=sum+i;
		}
		
	}
	printf("\nsum of all interger number betwwn 100 and 200 divisible by 9= %d\n",sum);
	
	
	
	
	
}
