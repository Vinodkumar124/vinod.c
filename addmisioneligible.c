//find the eligiblity of admission for a professional course based on the following critria..
//marks in maths>=65,and marks chem>=50, phy>=55 total three marks>=190 ,physic maths >=140 .then eligible
#include<stdio.h>
int main()
{
int math,phy,chem,total;	
 printf("enter your mathematic number = ");	
scanf("%d",&math);
printf("enter your physic number = ");	
scanf("%d",&phy);
printf("enter your chemistry number = ");	
scanf("%d",&chem);	

printf("your number in all subject...\n");
printf("mathematic=%d\n physics=%d\n chemistry=%d\n",math,phy,chem);

total=math+phy+chem;
printf("total marks is = %d\n",total);
int total1=phy+math;
printf("phy and math total %d\n",total1);


if(math>=65&&phy>=55&&chem>=50&&total>=190&&total1>=140){printf(" you are eligible for admission\n");
}
else{
printf("you are not eligible ");}

}




	

