//array minimum and maximum value
#include<stdio.h>
int main()
{ 
   int a[100],size,i,max,min;
   printf("enter array size= ");
   scanf("%d",&size);
   printf("enter array element= ");
    for(i=0;i<size;i++){ scanf("%d",&a[i]);
	}
   max=a[0],min=a[0];
   for(i=0;i<size;i++)
   {
   	if(a[i]>max){max=a[i];
	   }
	   if(a[i]<min){min=a[i];
	   }
   }printf("\nmaximum value is= %d\n",max);
   printf("\nminmum value is= %d\n",min);
}
