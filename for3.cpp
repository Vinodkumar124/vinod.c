//write a program in c to dispay n terms of natural number and their sum
#include<stdio.h>
int main()
{
	int n;
	int sum=1;
	printf("enter n term of natural number = ");
	scanf("%d",&n);
		printf("%d all natural number= \n",n);
for(int i=1;i<=n;i++){
	printf("%d ",i);
		sum=sum+i;
	}
	printf("\n n term natural number sum= %d\n",sum);
	
}
	
	
	
	

