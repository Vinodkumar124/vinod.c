#include<stdio.h>

int febo(int n){
	if(n==1){return 0;
	}	
	if(n==2){return 1;
	}
	else{ return febo(n-1)+febo(n-2);
	}
}
int main(){int k;
printf("enter number= ");
scanf("%d",&k);
for(int i=1;i<=k;i++){	printf("%d ",febo(i));

}	
}
