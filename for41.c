//Convert a decimal number to binary without using an array
#include<stdio.h>
int main()
{ int n,r,binary=0,i=1,c;
printf("enter any decimal number  = ");
scanf("%d",&n)	;
c=n;
 while(n>0)
 {
 	r=n%2;
 	binary=binary+(r*i);
 	n=n/2;
 	i=i*10;
 }
	printf("decimal no %d = binary no %d\n",c,binary);
	
	
}
