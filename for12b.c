#include<stdio.h>
int main()
{ int k=1,n;
printf("enter row number= ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=i;j++)
	{
		if(j<=i){printf("%d ",k);
		k++;
		}
		else{printf(" ");
		}
	}
	printf("\n");
}
	
	
	
}
