#include<stdio.h>
int main()
{int n,sum=0,c,r ;
printf("enter any number = ");
scanf("%d",&n);
c=n;
while(n>0)
{ r=n%10;
	sum=r+(sum*10);
	n=n/10;
	
	}	
	if(c==sum){printf("polindrom number\n");

	}
	else{printf("not polindrom number");
	}
	
}
