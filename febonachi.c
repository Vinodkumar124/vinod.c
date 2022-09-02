//fibonachi
#include<stdio.h>
int main()
{
int n,first=0,second=1,third;
printf("enter number = ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{ printf("%d ",first);
third=first+second;
first=second;
second=third;
	
}printf("febonachi series sum is= %d",third);

}
