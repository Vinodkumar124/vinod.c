//write a program to make simple caluclatar (to make addition,substraction,multipliation,division,and moduulo)
#include<stdio.h>
int main()
{
	int a,b,result;
	char op ;
		printf("enter operator(+,-,*,/) = ");
	scanf("%c",&op);
	
	printf("enter first value= ");
	scanf("%d",&a);

	printf("enter second value= ");
	scanf("%d",&b);
	

	if(op=='+'){ result =a+b;
		printf("addition of two number = %d\n",result);	
	}
	else if(op=='-'){
		result=a-b;
		printf("substraction of two number =%d\n ",result);
	}
		else if(op=='*'){
		result=a*b;
		printf("multiplation of two number =%d\n ",result);
	}
	
		else if(op=='/'){
		result=a/b;
		printf("division of two number =%d\n ",result);
	}
	    else { printf("invalid operation\n");
		}
	
	
	
	
	
	
	
}
