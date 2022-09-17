//write a proram in c to find sum of all elements of the array
#include<stdio.h>
int main(){
	int n,sum=0;
	printf("enter array element : ");
	scanf("%d",&n);
	int a[n];
	printf("input aray sum: ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];}
	printf("sum of all element stored in the array is = %d\n",sum);
	

}
