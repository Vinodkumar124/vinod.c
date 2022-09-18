//write a program in c 2d array of size 3*3 and print the matrix
#include<stdio.h>
int main()
{
	int arr[3][3],size,i,j;
	printf("enter 9 element for 2 d array= ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
	}
}
