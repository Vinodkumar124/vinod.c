//writye a c program to find of any number using function
#include<stdio.h>

int findcube(int x){
	return x*x*x;
}

int main(){
	int n;
	printf("enter number= ");
	scanf("%d",&n);
	printf("cube is= %d\n",findcube(n));
	return 0;
}
