#include<stdio.h>
int main()
{
	int a[20],size,value,i;
	printf(" enter your array size= ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter a value you want possition= ");
	scanf("%d",&value);
	for(i=0;i<size;i++)
	{
		if(a[i]==value)
		{printf("your int is = %d ",a[i]);
			printf("\nyour int position is = %d ",i);
		}
	}
}
