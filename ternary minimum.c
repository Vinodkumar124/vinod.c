
#include<stdio.h>
int main()
{
	int a =2,b=4 ,c=6 ,res ;
//	find  minimum value 
 res = (a<b)  ?( (a<c)?a:c )    :( (b<c) ? b:c )      ;	
	printf("%d" ,res);
	return 0 ;
}
