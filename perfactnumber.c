#include<stdio.h>
int main()
{
	int n,sum=0,c;
	printf("enter numbr= ");
	scanf("%d",&n);
	c=n;
	printf("number of divisior is= ");
	for(int i=1;i<n;i++)
	{
		if(n%i==0){ printf("%d ",i);
		sum=sum+i;
		}
	}
	printf("\nsum of divisior= %d\n",sum);
	if(c==sum){printf("number is perfact");
	}
	else{printf("number is not perfact");
	}
	
	
}
