//1 to 10 not print 6 
#include<stdio.h>
int main()
{
	for(int i =1 ; i<=10 ; i = i +1)
	{
		if(i==6){ continue ;
		}
		printf("%d\n"  , i);
	}
	
	
	
}
