//write a c program to check a number is polindrom or not
#include<stdio.h>
int main()
{
	int n,c,r,poli=0;
	printf("enter number= ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{ r=n%10;
	poli=r+(10*poli);
	n=n/10;
	}
	if(c==poli){printf("poli");
	}
	else{printf("not ");
	}
	
	
}
