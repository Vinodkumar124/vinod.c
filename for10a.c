#include<stdio.h>
int main()
{int k;
	for(int i=1;i<=4;i++){
		k=1;
		for(int j=1;j<=4;j++)
		{
			if(j<=i){printf("%d",k);
			k++;
			}
			else{printf(" ");
			}
		}
		printf("\n");
		
	}
	
	
	
}
