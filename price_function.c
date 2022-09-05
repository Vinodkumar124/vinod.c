#include<stdio.h>

int pizza(int a){
	return 180*a;	
}
int burger(int a){
	return 100*a;	
}
int dosa(int a){
	return 120*a;	
}
int idli(int a){
	return 50*a;	
}

int main(){	char choose;
            int x,choice,quantity;
	printf("-----------------------MENU-----------------------");
    printf("\n 1.  pizza \n");	
	printf("\n 2.  burger\n");
	printf("\n 3.  dosa \n");
	printf("\n 4.  idli \n");
	do{ 
	printf("\nCHOICE= ");
	scanf("%d",&choice);	
	switch(choice){
	case 1:
	 printf("\nyou have selected pizaa");
	printf("\nenter quantity= ");
	scanf("%d",&quantity);
		    printf("\npizza price: %d",pizza(quantity));
		    break;
	case 2:  printf("\nyou have selected burger");
	printf("\nenter quantity= ");
	scanf("%d",&quantity);
		    printf("\nburger price= %d",burger(quantity));
		    break;
	case 3:  printf("\nyou have selected dosa");
	printf("\nenter quantity= ");
	scanf("%d",&quantity);
		    printf("\ndosa= %d",dosa(quantity));
		    break;
	case 4:  printf("\nyou have selected idli");
	printf("\nenter quantity= ");
	scanf("%d",&quantity);
		    printf("\nidli= %d",idli(quantity));
			break;	
	default:printf("\nINVALID CHOICE ");
	}
	
	printf("\ndo you want place more order (YES(Y)/N0(N))= ");
	scanf("%s",&choose);
	
	}while(choose=='y'&&choose!='n'||choose=='Y'&&choose!='N');
}
