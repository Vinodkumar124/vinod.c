#include<stdio.h>
int main()
{int choice;
	float cel,far;
	printf("\nchoice 1 for celsius to convert farenaait\n");
	printf("\nchoice 2 for farenaait to convert celsius\n");
	printf("\nother choice for exit\n");
	do {
	
	printf("\nchoice = ");
	scanf("%d",&choice);

	switch(choice){
	case 1:printf("celsius is = ");
	scanf("%f",&cel);
	far=(1.8*cel)+32;
	printf("faranait is =%.0f\n ",far);
	break ;
case 2 :	printf("faranait  is = ");
	scanf("%f",&far);
cel=	(far-32)/1.8;
	printf("celsius is =%.0f\n ",cel);
	break ;
	default : printf("\nTHANK YOU\n");

	}
	
}while(choice==1||choice==2);
}
