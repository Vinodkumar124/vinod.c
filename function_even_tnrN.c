//tnrn == write a program in c to check given number is even or odds using the function
#include<stdio.h>

void checkEO();

void checkEO(){
	int n;
	printf("enter number= ");
	scanf("%d",&n);	
	if(n%2==0){printf("even\n");
	}
	else{printf("odd\n");
	}					
}
int main(){
	checkEO();
	return 0;
}
