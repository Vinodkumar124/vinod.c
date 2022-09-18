//Addition of two 2d Matrices
#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],size,i,j,c[100][100];
	printf("enter your 2d array size= \n");
	scanf("%d",&size);
	printf("enter element in your first array= \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
				scanf("%d",&a[i][j]);
		}		
	}  printf("matrix of first array= \n");
		for(i=0;i<size;i++)
	{printf("\n");
		for(j=0;j<size;j++)
		{
				printf("%d  ",a[i][j]);
		}		
	}
		printf("\nenter element in your second array= \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
				scanf("%d",&b[i][j]);
		}		
	} 
	printf("matrix of second array= \n");
		for(i=0;i<size;i++)
	{printf("\n");
		for(j=0;j<size;j++)
		{
				printf("%d  ",b[i][j]);
		}		
	}
	printf("\nsum of first array and second array= \n");
			for(i=0;i<size;i++)
	{printf("\n");
		for(j=0;j<size;j++)
		{
				printf("%d  ", a[i][j]+b[i][j]);
		}		
	}
	
}
