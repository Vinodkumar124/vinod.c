//program to check character is uppercase lowercase alphabet or a digit a special number
#include<stdio.h>
int main()
{ char ch;
printf("enter character = ");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'){printf("LOWER CASE \n");
}
else if(ch>='A'&&ch<='Z'){
	printf("UPPER CASE\n");
}
else if(ch>='0'&&ch<='9'){
	printf("DIGIT\n");
}	
else{printf("special number\n ");
}	
	
}
