//write a program to find maximum and minimum betwwn two number using function
#include<stdio.h>

int findmax(int a,int b){ int max;
	max=(a>b)?a:b;
	return max;
}
int findmin(int a,int b){ int min;
	min=(a<b)?a:b;
	return min;
}

int main(){ char choose;
	int x,y,choice;
	printf("\n---------------menu--------------");
	printf("\nchoice 1. = find maximum value");
	printf("\nchoice 2. = find minimum value");
	do{printf("\nenter your choice= ");
	scanf("%d",&choice);
	printf("\nenter first value= ");
	scanf("%d",&x);
	printf("\nenter second value= ");
	scanf("%d",&y);
	switch(choice){case 1: printf("\nmaximum value is=%d",findmax(x,y));
	break;
	case 2: printf("\nminimum value is=%d",findmin(x,y));
	break;
	default : printf("\ninvalid operation");
	}
	printf("\nwould you like to continue(yes=y,no=n) = ");
	scanf("%s",&choose);
	
	}while(choose=='Y'&&choose!='N'||choose=='y'&&choose!='n');
}
