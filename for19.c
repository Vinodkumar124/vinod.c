//write a program in c to display the n term of harmonic series and their sum
#include<stdio.h>
int main()
{
int n;
printf("enter n terms of harmonic series = ");
scanf("%d",&n);
float sum=0;
for(int i=1;i<=n;i++)
{
	printf("1/%d+ ",i);
	sum=sum+(1.0/i);	
}	
		printf("\nsum of %d term of harmonic series= %f",n,sum);
}
