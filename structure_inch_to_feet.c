//add two distance in feet and inch
#include<stdio.h>

struct distance
{
	int feet;
	float inch;
}add1,add2,result;
int main()
{
     printf("enter first distance feet= \n");
	scanf("%d",&add1.feet);
	printf(" enter first distance inches= \n");
	scanf("%f",&add1.inch);
	
	printf("enter second distance feet= \n");
	scanf("%d",&add2.feet);
	printf("enter second distance inches= \n");
	scanf("%f",&add2.inch);
	printf("first distance feet = %d\n  inch= %.2f\nenter second distance feet=%d\ninch=%.2f ",add1.feet,add1.inch,add2.feet,add2.inch);
	result.feet=add1.feet+add2.feet;
	result.inch=add1.inch+add2.inch;
	printf("\ntotal feet = %d",result.feet);
	printf("\ntotal inch = %.2f",result.inch);
	while(result.inch>=12)
	{
		result.inch=result.inch-12;
		result.feet++;
	}
		printf("\nkul feet = %d \n inch = %.2f",result.feet,result.inch);
	
//	printf("\ntotal feet = %.2f",result.feet);
}
