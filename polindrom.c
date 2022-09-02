#include<stdio.h>
int main()
{
	int n,c,r,rev=0;
	printf("enter number = ");
	scanf("%d",&n);
	c=n;
	while(n>0){
		r=n%10;
		rev=r+(rev*10);
		n=n/10;
	}
	if(c==rev){printf("polindrom");
	}
	else{printf("not polindrom");
	}
	
}
