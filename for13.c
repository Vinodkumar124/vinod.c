#include<stdio.h>
int main()
{ int k=1;
for(int i=1;i<=4;i++)
{
	for(int j=1;j<=4;j++)
	{
		if(j>=5-i&&j<=3+i&&k){printf("%d ",k);
		k++;
		}
		else{printf(" ");
		}
	}
	printf("\n");
}
	
	
	
}
