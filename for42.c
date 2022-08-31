// binary no to conert in decimal
 #include<stdio.h> 
int main()
{ int n,c,decimal=0,r,i=1;
printf("enter any number = ");
scanf("%d",&n);
c=n;

while(n>0)
{ r=n%10;
decimal=decimal+(r*i);
n=n/10;
i=i*2;	
}
printf("binary %d = decimal = %d ",c,decimal);






	
	
}



