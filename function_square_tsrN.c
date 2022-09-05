//tsrn square find
#include<stdio.h>

void square(int );

void square(int n){ 
		printf("square is = %d\n",n*n);
}
int main(){ int p;
	printf("enter number= ");
	scanf("%d",&p);
	square(p);
}
