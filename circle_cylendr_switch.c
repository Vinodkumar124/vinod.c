#include<stdio.h>
int main()
{
	int r,height,choice,yes;
	float area,paridhi,volume;
	printf("choice 1,2,3=");
	printf("\n1.area of circle");
		printf("\n2.circle of paridhi(circumference)");
			printf("\n3.volume of cylender");
do{

	printf("\nenter your choice= ");
	scanf("%d",&choice);
	switch(choice){
	case 1:	printf("\nenter circle radius = ");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("\narea of circle = %.2f\n",area);
	break;
		case 2:	printf("enter circle radius = ");
	scanf("%d",&r);
	paridhi=2*3.14*r;
	printf("\ncircle of paridhi = %.2f\n",paridhi);
	break;
	case 3:  	printf("\nenter cylnendr radius = ");
	scanf("%d",&r);
	printf("\nenter cylender height= ");
	scanf("%d",&height);
	volume=3.14*r*r*height;
	printf("\nvoliume of cylender= %.2f\n",volume);
	break;
	default: printf("\ninvalid operation");
	
}
	printf("\nwould you like to continue(yes for 1)= ");
	scanf("%d",&yes);
	
}while(yes==1);
	
	
}
