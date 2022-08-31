//prime number or not
#include<stdio.h>
int main()
{    int n,count=0;
printf("enter any number u want check prime or not = ");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
	if(n%i==0){
		count++;
	}	
}
if(count==2){printf("prime number");
}
else{printf("not prime number");
}
	
	
	






	
}
