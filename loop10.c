//program to count number of digitn in an interger
#include<stdio.h>
int main()
{ int n,count=0;
printf("enter any number u want to digit count= ");
scanf("%d",&n);
while(n>0){
	count++ ;
	n=n/10;
}
	printf("integer digit count= %d\n",count);	
}
