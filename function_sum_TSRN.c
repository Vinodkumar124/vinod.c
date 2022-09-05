#include<stdio.h>
void add(int , int);

void add(int a ,int b){ int c;
	c=a+b;
printf("sum is =%d",c);	
}
 int main(){
 	int x,y;
 	printf("enter two value= ");
 	scanf("%d\n%d",&x,&y);
 	add(x,y);
 	
 	
 }
