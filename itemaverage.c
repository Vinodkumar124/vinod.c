#include<stdio.h>
int main()
{
  float item1,item2,weight1, weight2,valueavg;
	printf("NO. of item1= ");
	scanf("%f",&item1);
	printf("enter item1 weight = ");
	scanf("%f",&weight1);
	printf("NO. of item2=  ");
	scanf("%f",&item2);
	printf("enter item2 weight = ");
	scanf("%f",&weight2);
	valueavg=((item1*weight1)+(item2*weight2))/(item1+item2);
	printf("calcualtion the average value of the item =%.2f",valueavg);



	
}

