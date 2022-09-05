// tnrn ==write a program in c to swap two numbers using function
#include<stdio.h>
 void swap();
 
 void swap(){
 	int a,b;
 	printf("enter two number=  ");
 	scanf("%d\n%d",&a,&b);
 	a=a+b;
 	b=a-b;
 	a=a-b;
 	printf("a=%d\nb=%d\n",a,b);
 }
 int main(){
 	swap();
 	return 0;
 }
