//calculator
#include<stdio.h>
int main()
{
	char op,choose;
	float res;
	int a,b;
  do{
   printf("enter operator(+,-,*,/) = ");
	scanf("%c",&op);
	printf("enter first number = ");
	scanf("%d",&a);
	printf("enter second number = ");
	scanf("%d",&b);
	
	
	
		if(op=='+'){ res=a+b;
		printf("addtion of two number =%.0f\n",res);
			}
		else if(op=='-'){ res=a-b;
		printf("substraction of two number=%.0f\n",res);
		}
			else if(op=='*'){ res=a*b;
		printf("multiplation of two number=%.0f\n",res);
		}
			else if(op=='/'){ res=a/b;
	printf("division of two number=%.0f\n",res);
		}
		else{ printf("invalid opption\n");
		}
		
		printf("would u like to continue(y,n,Y,N)\n= " );
		scanf("%c",&choose);
		}while(choose=='y'||choose=='n'&&choose=='Y'||choose=='N');
	
	
	
	
	
	
	
	
	
}
