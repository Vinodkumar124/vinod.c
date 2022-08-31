//display n number of multiplation table vertacally
#include<stdio.h>
int main()
{
 int n;
 printf("enter number multiplation table vertacally = ");
 scanf("%d",&n);
 printf("mul table from 1 to %d \n",n);
for(int i=1;i<=10;i++)
{
for(int j=1;j<=n;j++)
{
printf("%dX%d = %d ",j,i,i*j); 
}
printf("\n");
}	
	
	
	
	
	
}
