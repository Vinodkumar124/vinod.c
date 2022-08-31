//display the sum of n number of odd natural number
#include<stdio.h>
int main()
{int n,sum;
printf("enter number= ");
scanf("%d" ,&n); 
for(int i=1;i<=n;i++){
	if(i%2!=0){printf("%d ",i);
	sum=sum+i;
	}	
} 
printf("\nodd natural  number sum is = %d",sum);
	
	
	
}
