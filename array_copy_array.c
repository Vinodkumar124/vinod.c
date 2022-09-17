//write a program in c to copy the element of one array into another array;
#include<stdio.h>
int main(){
	int arr1[10],arr2[10],n,i;
	printf("enter array total element= ");
	scanf("%d",&n);
		printf("enter array  element= ");
		for(i=0;i<n;i++){
			scanf("%d",&arr1[i]);
		}
			printf(" array  element= ");
		for(i=0;i<n;i++){
			printf("%d ",arr1[i]);
			arr2[i]=arr1[i];
		}
			printf("copy array  element= ");
		for(i=0;i<n;i++){
			printf("%d ",arr2[i]);
		}		
}
