//find wheather a given year is a leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("enter year = ");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("enter year %d is  LEAP YEAR\n",year);
	}
	else{
		printf("enter year  is  NOT LEAP YEAR\n");
	}
}
