#include<stdio.h>

int add(int a,int b){
	return a+b;	
}
int sub(int a,int b){
	return a-b;	
}
int mul(int a,int b){
	return a*b;	
}
int div(int a,int b){
	return a/b;	
}

int main(){	char choose;
            int x,y,choice;
	printf("-----------------------MENU-----------------------");
    printf("\n 1.  Addition \n");	
	printf("\n 2.  Substraction \n");
	printf("\n 3.  Multiplication \n");
	printf("\n 4.  Divison \n");
	do{ 
	printf("\nCHOICE= ");
	scanf("%d",&choice);
	printf("\nENTER FIRST NUMBER= ");
    scanf("%d",&x);
    printf("\nENTER SECOND NUMBER= ");
	scanf("%d",&y);
	
	switch(choice){
	case 1: 
		    printf("\nADDITION= %d",add(x,y));
		    break;
	case 2: 
		    printf("\nSUBSTRACTION= %d",sub(x,y));
		    break;
	case 3: 
		    printf("\nMULTIPLACTION= %d",mul(x,y));
		    break;
	case 4: 
		    printf("\nDIVISION= %d",div(x,y));
			break;	
	default:printf("\nINVALID CHOICE ");
	}
	
	printf("\nWOULD YOU LIKE TO CONTINUE(YES(Y)/N0(N))= ");
	scanf("%s",&choose);
	
	}while(choose=='y'&&choose!='n'||choose=='Y'&&choose!='N');
}
