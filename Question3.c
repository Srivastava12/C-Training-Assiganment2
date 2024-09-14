/*
C program to find area of an equilateral triangle 
    Example Input 
 
 Enter side of the equilateral triangle: 10 
 Output 
 
 Area of equilateral triangle = 43.3 sq. units 
 
 C equivalent expression to find area of equilateral triangle -  (sqrt(3) / 4) * (side * side)
*/
#include<stdio.h>
#include<math.h>
int main(){
	//Variable Declarating
      float side;
	//Get input from USER 
      printf("Enter side of the equilateral triangle :- ");
      scanf("%f",&side);
	//Calculat data & Show calculeted data
	  printf("Area of equilateral triangle :- %0.1f sq.units",(((sqrt(3))/4)*(side*side)));
	return 0;
}
