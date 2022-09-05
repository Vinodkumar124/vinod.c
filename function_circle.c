//c program to find diemeter ,circumference and area of circle usinf function
#include<stdio.h>

float getdiemeter(float radius){
	return 2*radius;
}
float getcircum(float radius){
	return 2*(3.14)*radius;
}
float getarea(float radius){
	return 3.14*radius*radius;
}
int main(){float r; 
int choice, k;
printf("\nchoice 1= circle diemeter\n");
printf("\nchoice 2= circle circumference\n");
printf("\nchoice 3= circle circle area\n");

do{printf("enter choice= ");
scanf("%d",&choice);
printf("enter radius= ");
scanf("%f",&r);
switch(choice){
	case 1: printf("%f\n",getdiemeter(r));
	break;
  case 2: printf("%f\n",getcircum(r));
  break;
case 3 : printf("%f\n",getarea(r));
break;
default: printf("wrong");
}

printf("do u like continue= ");
scanf("%d",&k);
}while(k==1);
return 0;


}
