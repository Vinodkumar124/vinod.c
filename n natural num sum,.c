//print the sum of first n naturl number 
#include<stdio.h>
int main () 
{
	int n ;
	printf("enter natural number : ");
	scanf("%d", &n);
	int sum = 0;
	for(int i =1 ; i<=n ; i = i +1){
		sum = sum + i ;
	}
	printf("sum is %d : " , sum);
	
}
