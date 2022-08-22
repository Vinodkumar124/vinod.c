#include<stdio.h>
//max value
int main()
{
	int a=4 ,b=8 , c=56 ,res ;
	
res	= (a>b)  ? ((a>c)?a:c  )  :(b>c) ? b:c    ;
	
	
	printf("%d" ,res);
}
