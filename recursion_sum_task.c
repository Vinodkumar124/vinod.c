//calculate the sum of numbers from 1 to using recursion
#include<stdio.h>
 int sum(int n){
 if(n>1){	sum(n-1);
 	return n+sum(n-1);
 }
 	
 }
 int main(){
 	int p,k;
 	printf("enter number= ");
 	scanf("%d",&k);
 	p=sum(k);
 	printf("sum is= %d",sum(k));
 }
