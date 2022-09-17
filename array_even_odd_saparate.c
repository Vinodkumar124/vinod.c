#include<stdio.h>
int main()
{
	int arr[100],even[100],odd[100],i,j=0,k=0,size;
	printf("enter array element size=\n ");
	scanf("%d",&size);
	printf("enter array element = \n");
	for(i=0;i<size;i++)
	{	scanf("%d",&arr[i]);
	}	
	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			even[j]=arr[i];
j++	;	}else{odd[k]=arr[i];
k++;
}
	}
		printf("enter  even array element =\n ");
	for(i=0;i<j;i++)
	{printf(" \n%d",even[i]);
	}
		printf("enter  odd array element =\n ");
	for(i=0;i<k;i++)
	{printf("\n %d",odd[i]);
	}
}
