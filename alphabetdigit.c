//check wheater a character is an alohabet .digit special numer 
#include<stdio.h>
int main()
{ char ch;
printf("enter any character = ");
scanf("%c",&ch);
 if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
 	printf("character is alphabet\n");
 }
else if(ch>='0'&&ch<='9'){
	printf(" character is digit\n");
}
else{printf(" SPECIAL NUMBER\n");
}
	
	
	
	
}
