//c program to find power of a number using for loop
#include<stdio.h>
int main()
{int base,exponet,power=1;
printf("enter base= ");
scanf("%d",&base);
printf("enter exponet= ");
scanf("%d",&exponet);	
	for(int i=1;i<=exponet;i++){
		power=power*base;
	}
	printf("%d^%d=%d\n",base,exponet,power);
	
}
