//arm strong number is
#include<stdio.h>
int main()
{
	int n,r,arm=0,sum=0,c;
	printf("enter any number you want arm strong number= ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		arm=arm+(r*r*r);
		n=n/10;
		printf("%d ", r*r*r);
		sum=sum+(r*r*r);
	}
	printf("sum is = %d\n",sum);
	if(c==arm){printf("arm strong number ");
	}
	else{printf("not arm strong number ");
	}
	
	
	
}
