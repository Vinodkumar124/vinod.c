//write a program in c to convert decimal to binary using the function
#include<stdio.h>

void convert();

void convert(){
	int n,r,binary=0,i=1;
	printf("enter decimal= ");
	scanf("%d",&n);
	while(n>0){
		r=n%2;
		binary=binary+(r*i);
		n=n/2;
		i=i*10;
	}printf("binary is= %d\n",binary);
}
int main(){ convert();
return 0;
}
