//tsrs take something return something

#include<stdio.h>
int add(int ,int );

int main(){
	int x,y,s;
	printf("enter two number= ");
	scanf("%d\n%d",&x,&y);
	s=add(x,y);
	printf("sum is= %d\n",s);
	return 0;
}

int add(int a,int b){
	int c ;
	c=a+b;
    return c;
}
