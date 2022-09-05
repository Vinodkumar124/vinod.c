//tsrs find square
#include<stdio.h>
int square(int n);

int square( int n){ int s;
	s=n*n;
	return s;
}
int main()
{int x,y;
printf("enter number= ");
scanf("%d",&x);
y=square(x);
printf("square is=%d",y);
	
}
