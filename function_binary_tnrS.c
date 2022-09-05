//write a program in c to convert decimal to binary using the function
#include<stdio.h>

int convert();

int convert(){
	int n, r,binary=0,i=1;
	printf("enter decimal= ");
	scanf("%d",&n);
	while(n>0){
		r=n%2;
		binary=binary+(r*i);
		n=n/2;
		i=i*10;
	}printf("binary is= %d\n",binary);
	return binary;
}
int main(){ int k,p;	
p=convert(k);
p=convert(k);
return 0;
}
