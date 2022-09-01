//c program to print number in words
#include<stdio.h>
int main()
{
	int n,r,rev=0,digit;
	printf("enter number = ");
	scanf("%d",&n);
	while(n>0)
	{r=n%10;
	rev=r+(rev*10);
	n=n/10;
	}
	while(rev>0){
		digit=rev%10;
		switch(digit){
				case 0:printf("zero ");
			break;
			case 1:printf("one ");
			break;
				case 2:printf("two ");
			break;
				case 3:printf("three ");
			break;
				case 4:printf("four ");
			break;
				case 5:printf("five ");
			break;
				case 6:printf("six ");
			break;
				case 7:printf("seven ");
			break;
				case 8:printf("eight ");
			break;
				case 9:printf("nine ");
			break;
			
			default: printf("something wrong");
		}
		rev=rev/10;
	}
	
	
}

