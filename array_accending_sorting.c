#include<stdio.h>

int main(){
int	aray[5];int temp,i,j;
	printf("enter number= ");
	for(i=0;i<5;i++){
		scanf("%d",&aray[i]);
	}
	for(i=0;i<5;i++){
		for( j=i+1;j<5;j++){if(aray[i]>aray[j]){temp=aray[i];
		aray[i]=aray[j];
		aray[j]=temp;
		}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d ",aray[i]);
	
}
}
