//write a function that print namste if user indian and bonjur if user is french''#include 
#include<stdio.h>

void Namste();
void Bonjour();

int main(){
	printf("enter f for french or i for indian = ");
	char ch;
	scanf("%c" ,&ch);
	if(ch=='i'){ Namste();
	}
	else{Bonjour();
	}
	return 0;
}

void Namste(){
	printf("Namste\n");
}
void Bonjour(){
	printf("Bonjour");
}
