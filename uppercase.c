//write a program to find if a character entered by user is upper case or not
#include<stdio.h>
int main()
{ char ch ;
printf("enter character : ");
scanf("%c" , &ch);
if(ch>='a' && ch<='z'){
	printf("lower case\n");
}
else if(ch>='A' && ch<='Z')
{printf("UPPER CASE\n");
}
else{
	printf("not a character: ");
}

}
	
	
	
	
	
	
	
	

