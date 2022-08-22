//write a program to check if a student pass or failed .
//marks >30 is pass .. marks <=30 is fail

#include<stdio.h>

int main()

{ int marks ;
printf(" enter number : ");
scanf("%d", &marks);
 if(marks > 30 && marks <= 100){
 	printf("pass\n");
 	
 }
else if( marks<=30  && marks >=0){
	printf("fail\n");
}
	
	else{ 
	printf("wrong number : ");
	}
}
	

	
	
	
	
	
	
	
	
	
	
	
	

