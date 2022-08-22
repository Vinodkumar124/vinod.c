//program to  read the age of candinate and determine wheater it is eligible for casting his her own vote#include<
#include<stdio.h>
int main()
{
	int age ;
	printf("ENTER AGE = ");
	scanf("%d",&age);
	
	if(age>=18&&age<=100)
	{
		printf("ADULT\n");
		printf("congratulation ! you are eligible for vote..\n");
	}
	else {
		printf("HEY SORRY!! YOU ARE NOT ADULT.....\n");
		printf("you are not eligible for vote.\n");
	}
	
	
	
}
