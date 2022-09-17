#include<stdio.h>
int main()
{
	int arr[100],size,i,j,max,max2nd;
	printf("enter array size= ");
	scanf("%d",&size);
		printf("enter array element= ");
		for(i=0;i<size;i++)
		{
				scanf("%d",&arr[i]);
		}
		max=arr[0];max2nd=arr[0];
			for(i=0;i<size;i++)
		{if(arr[i]>max)
				{
		max	=	arr[i];	
		j=i;
				}
		}
			for(i=0;i<size;i++)
		{if(i==j){
			i++;
			i--;
		}
		else{
			if(arr[i]>max2nd){
				max2nd=arr[i];
			}
		}
		}
	printf("second largest element is= %d\n ",max2nd);
}





