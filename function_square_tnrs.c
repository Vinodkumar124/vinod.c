//tnrs find square
#include<stdio.h>

int square();

int square(){ int n,s;
	printf("enter numbr = ");
	scanf("%d",&n);
	s=n*n;
	return s;
}
int main(){int p;
p=square();
	printf("square is=%d",p);
}
