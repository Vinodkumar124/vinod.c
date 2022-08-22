#include<stdio.h>
int main()
{
//	age>=18 adult age>13 && age<18 teenger  
int age;
printf("enter your age : ");
scanf("%d" ,&age);
if(age>=18 &&age<=100)
{printf("ADULT\n");
}
else if (age>13&&age<18){
 printf("TENEGAR\n");
 }	
else if(age>=0&&age<=13) {
	printf("CHILD\n");
}	
	else{ printf("not a number\n");
	}	
}
