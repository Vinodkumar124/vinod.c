//convert specified days into years weeks and days.
#include<stdio.h>
int main ()
{
int days,year=365,week=7;
 printf("enter days = ");
 scanf("%d",&days);
 if(days/365){
 printf("year =%d\n",days/365);
 }
 if((days%365)/7){printf("week=%d\n",(days%365)/7);
 }
  if((days%365)%7){printf("days=%d\n",(days%365)%7);
 }
 }
