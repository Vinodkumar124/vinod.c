//Delete an element at desired position from an array
#include<stdio.h>
int main()
{
	int arr[100],size,i,pos;
	printf("enter array size= ");
	scanf("%d",&size);
		printf("enter array element= ");
		for(i=0;i<size;i++)
		{
				scanf("%d",&arr[i]);
		}
				printf("enter postion you want delete = \n");
				scanf("%d",&pos);
for(i=pos-1;i<size;i++){
	arr[i]=arr[i+1];
}				printf("after deleting a element aray=\n ");
for(i=0;i<size-1;i++){
	printf("%d ",arr[i]);
}
}
