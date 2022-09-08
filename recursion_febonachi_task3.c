//print febonachi series using recursion
#include<stdio.h>

int febo(int n){
	int first=1,second=0,third;
	if(n>1){
		third=first+second;
		first=second;
		second=third;
		return febo(n-1)+febo(n-2);
	}
		
}
int main(){
	int k;
	printf("enter number you want febonachi series= ");
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		printf("%d ",febo(i));
	}
}

