
//read 10 numbers and find their sum and avg

#include<stdio.h>
int main()
{
	int n;
	float sum=1;
	printf("enter n term of natural number = ");
	scanf("%d",&n);
		printf("%d all natural number= \n",n);
for(int i=1;i<=n;i++){
	printf("%d ",i);
		sum=sum+i;
	}
	printf("\n n term natural number sum= %.2f\n",sum);
	float avg = sum/10;
	printf("10 number avg is = %.2f\n",avg);
	
	}
	
