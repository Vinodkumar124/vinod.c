//write a program in c to find he square of any number using the function

#include<stdio.h>
void square();

void square(){
	int n;
	printf("enter number= ");
	scanf("%d",&n);
	printf("square is= %d\n",n*n);
}
int main(){
	square();
	return 0;
}
