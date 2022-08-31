//check given number is perfct
#include<stdio.h>
int main()
{	int n,sum;
	printf("enter any number = ");
	scanf("%d",&n);
	printf("number divisior is= ");
	for(int i=1;i<n;i++)
	{
		if(n%i==0){
			printf("%d ",i);
			sum=sum+i;}	
			}		
	printf("\nmodulo sum is = %d",sum);
	if(sum==n){printf("\n this is perfact number ");
	}
	else{printf("\nthis is not perfact number");
	}
}
