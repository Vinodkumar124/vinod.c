//write a progeram in c show the simple strture 
 #include<stdio.h>
 
 void add();
 
 void add(){ int a,b,c;
 	printf("enter two number= ");
 	scanf("%d\n%d",&a,&b);
 	c=a+b;
printf("sum is %d and %d= %d\n",a,b,c); 	
 	
 }
 
int  main()
{
	
	add();
	return 0;
}
