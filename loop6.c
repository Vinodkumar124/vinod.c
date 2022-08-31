//write a c program to find sum of all natural number betwwn 1 to n.

#include<stdio.h>
int main()
{ int n,sum=0;
printf("enter number= ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
	sum=sum+i;
}
	printf("sum of natural number is = %d\n",sum);	
	
}
