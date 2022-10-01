//2. WAP to take 10 no. Input from user and find out …
//3. How many Even numbers are there
//4. How many odd numbers are there
//5. Sum of even numbers
//6. Sum of odd numbers WAP to print table up to given numbers
#include<stdio.h>
int main()
{	int arr[10],sum=0;
    printf("enter 10 numbr = \n");
    for(int i=0;i<10;i++)
	{printf("element - %d :  ",i);
		scanf("%d",&arr[i]);
	} printf("user number is= \n");
	 for(int i=0;i<10;i++)
	{
	printf("%d ",arr[i]);
	}
	printf("\neven number is= \n");
		 for(int i=0;i<10;i++)
	{
	if(arr[i]%2==0)
	{
		printf("%d ",arr[i]);
	}
	}
		printf("\nodd number is= \n");
		 for(int i=0;i<10;i++)
	{
	if(arr[i]%2!=0)
	{
		printf("%d ",arr[i]);
	}
	}
		 for(int i=0;i<10;i++)
	{
	if(arr[i]%2==0)
	{
		sum=sum+arr[i];
	}
	}printf("\neven number sum is= %d",sum);
	int sum1=0;
		 for(int i=0;i<10;i++)
	{
	if(arr[i]%2!=0)
	{
		sum1=sum1+arr[i];
	}
	}printf("\nodd number sum is= %d",sum1);int n;

}
