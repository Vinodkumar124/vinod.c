#include<stdio.h>
int main()
{    int n;
printf("enter any rows= ");
scanf("%d",&n);

	for(int i=1;i<=n;i++){
	
	for(int j=1;j<=n;j++){
		if(j<=i){
			printf("%d",i);
			
		}
		else{ printf(" ");
		}
	}
	
	printf("\n");
}
}
