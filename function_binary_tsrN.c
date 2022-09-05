//write a program in c to convert decimal to binary using the function
#include<stdio.h>

void convert(int );

void convert(int n){
	int r,binary=0,i=1;
	while(n>0){
		r=n%2;
		binary=binary+(r*i);
		n=n/2;
		i=i*10;
	}printf("binary is= %d\n",binary);
}
int main(){ int k;	printf("enter decimal= ");
	scanf("%d",&k);
convert(k);
return 0;
}
