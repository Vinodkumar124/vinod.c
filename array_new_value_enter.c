// Insert New value in the array 
#include<stdio.h>
int main()
{
	int arr[100],size,i,value,loc;
	printf("enter aray size= ");
	scanf("%d",&size);
	printf("enter array element= ");
	for(i=0;i<size;i++){
			scanf("%d",&arr[i]);
	}
	
	printf("enter new value you want in array= ");
	scanf("%d",&value);
	printf("enter location you want enter value in array= ");
	scanf("%d",&loc);
	for(i=size-1;i>=loc;i--){
		arr[i+1]=arr[i];
	}
	arr[loc]=value;
		for(i=0;i<size+1;i++){
			printf("%d",arr[i]);
	}
	
	
	
	
	
	
	
}
