//write a c program to whwther a number is prime armstrong or perfect number using function

#include<stdio.h>

int getprime(int a){int count=0; 
	for(int i=1;i<=a;i++){
		if(a%i==0){
			count++;
		}
	
	}		return count==2;
}
int getarmstrong(int a){int r,arm=0,c;
c=a;
	while(a>0){
		r=a%10;
		arm=arm+(r*r*r);
		a=a/10;
	}
	return c==arm;
}
int getperfact(int a){int sum=0;
	for(int i=1;i<a;i++){
		if(a%i==0){sum=sum+i;
		}
	
	}	return a==sum;		
	}
int main(){char choose;
	int n,choice;
	printf("\n_____-----MENU-----______\n");
     printf("\nchoice 1.= check prime number");
     printf("\nchoice 2.= check arm strong number");
     printf("\nchoice 3.= check permfact number");
	
do{  
printf("\nenter choice= ");
	scanf("%d",&choice);
printf("\nenter number= ");
scanf("%d",&n);
switch(choice)
{case 1 :	if(getprime(n)){printf("\nprime number");
	}
	else{printf("\nnot prime  number");
	} 
	break;
case 2 :	 if(getarmstrong(n)){printf("\narm strong number");	
	}
	else{printf("\nnot arm strong number");
	}
	break;
	
case 3 :	 if(getperfact(n)){printf("\nperfact number");
		}
		else{printf("\nnot perfact number");
		}
		break ;
  default : printf("\ninvalid operation");
}
	printf("\nwould u like to continue(yes=y ,no=n)= ");
	scanf("%s",&choose);
}while(choose=='y'&&choose!='n'||choose=='Y'&&choose!='N');
	
return 0;	
	
	
}
