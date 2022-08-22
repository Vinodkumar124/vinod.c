//c program to find area and circumference of circle..
#include<stdio.h>

int main()
{
	float area, radius, cirum ;
	printf("enter radius = ");
	scanf("%f" ,&radius );
	area = 3.14 * radius *radius;
	printf("area of circle = %.2f" , area);
	cirum = 2 * 3.14 * radius ;
	printf("\ncircumference of circle = %.2f" ,cirum);
	
	
	
	
}
