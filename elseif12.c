//age>=18 print adult/ age>13 and age<18 print tenager 

#include<stdio.h>
int main()
{ 
int age ; 
printf("enter your age : ");

scanf("%d" , &age);

if(age>=18){ 
printf("adult\n");
}
else if(age>13 && age<18){
	printf("teneger\n");
	
}
else{
	printf("not child");
	
}	
	
	
	
	
	
}
