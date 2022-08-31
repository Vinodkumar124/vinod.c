//calculate n terms of square natural number and their sum
#include<stdio.h>
int main()
{
	int n,sum;
	printf("enter  n term of number = ");
	scanf("%d",&n);
	printf("%d term of square natural number series is = ",n);
	for(int i=1;i<=n;i++)
	{
		printf("%d  " ,i*i);
		 sum =sum+i*i;
	}
	printf("\n%d term of sqaure natural number sum is= %d ",n,sum);
	
	
	
	
	
}
