//tsrn == write a program in c to check given number is even or odds using the function
#include<stdio.h>

void checkEO();

void checkEO(n){
	if(n%2==0){printf("even");
	}
	else{printf("odd");
	}
}
int main(){ int k;
printf("enter number= ");
scanf("%d",&k);
checkEO(k);
return 0;
	
}
