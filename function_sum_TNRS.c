//tnrs take nothing return something
#include<stdio.h>
 int add();
 int main(){ int s;
 	s=add();
 	printf("sum is=%d",s);
 }
 
 int add(){
 	int a,b,c;
 	printf("enter number= ");
 	scanf("%d\n%d",&a,&b);
	c=a+b;
	return c;
	  }
