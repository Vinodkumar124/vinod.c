#include<stdio.h>

int main()
{ int A =1 ,B =2 ,C =4 ,res ;
res = (A>B&&A>C)? (A)           :(A>C) ? A:C        ;
printf("%d" ,res);

}
