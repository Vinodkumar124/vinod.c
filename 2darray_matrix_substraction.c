//Subtraction of two Matrices

#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],i,j,size;
	printf("enter your 2d array size= \n");
	scanf("%d",&size);
	printf("enter your first array element= \n");
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
			scanf("%d",&a[i][j]);
	}
	}
		printf(" your first array  matrix element= \n");
	for(i=0;i<size;i++)
	{printf("\n");
	for(j=0;j<size;j++)
	{
			printf("%d  ",a[i][j]);
	}
	}
		printf("\nenter your second array element= \n");
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
			scanf("%d",&b[i][j]);
	}
	}
	printf("\n your second array  matrix element= \n");
	for(i=0;i<size;i++)
	{printf("\n");
	for(j=0;j<size;j++)
	{
			printf("%d  ",b[i][j]);
	}
	}
	printf(" \nsubstraction array  matrix 0f first and second array matrix element= \n");
	for(i=0;i<size;i++)
	{printf("\n");
	for(j=0;j<size;j++)
	{
			printf("%d  ",a[i][j]-b[i][j]);
	}
	}
	
	
	
}
