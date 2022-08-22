//wrie a function to calculate area a sqaure a circle ana a reactangle .

#include<stdio.h>

float squarearea( float side);
float circlearea(float rad);
float reactanglearea(float a , float b);



int main(){
	float a =5.0 ;
	float b = 20.0 ;
printf("area is = %f\n" ,reactanglearea(a,b));
	
	
	
	return 0;

}
float squarearea(float side){
	return side * side ;
}
float circlearea(float rad){
	return 3.14 * rad * rad;
}
float reactanglearea(float a ,float b){
	return a * b ;
}
