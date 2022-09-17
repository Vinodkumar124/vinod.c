//write a program in c to find the sum of all element of the array
#include<stdio.h>
int main()
{
	int arr[10],n,sum=0;
	printf("enter number= ");
	scanf("%d",&n);
	printf("\nenter array element=\n ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		printf("\n array element=\n ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
		sum=sum+arr[i];
	}
	printf("\nsum is array element= %d ",sum);
}
