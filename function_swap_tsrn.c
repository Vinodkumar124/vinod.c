// tsrn ==write a program in c to swap two numbers using function
#include<stdio.h>

void swap(int a,int b);

void swap(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\nb=%d\n",a,b);
}
int main(){
	int x,y;
	printf("enter two value= ");
	scanf("%d\n%d",&x,&y);
	swap(x,y);
		
}
