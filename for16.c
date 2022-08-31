//calculate n terms of even natural number and their sum
#include<stdio.h>
int main()
{
	int sum,n;
	printf("enter number = ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			printf("%d ",i);
			sum=sum+i;
		}		
	}
	printf("\nsum is =%d\n",sum);	
}
