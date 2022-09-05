//tnrs == write a program in c to check given number is even or odds using the function/
#include<stdio.h>

int checkEO();

int checkEO(){ int n;
	printf("enter number= ");
scanf("%d",&n);
return n%2==0;
	
}
int main(){
	if(checkEO()){printf("even");
	}
	else{printf("odd");
	}
}
