/* C program to calculate Compound Interest 
 
    Example Input 
    Enter principle (amount): 1200 
    Enter time: 2 
    Enter rate: 5.4 
    Output 
 
    Compound Interest = 1333.099243 
 
    Compound Interest formula 
    Formula to calculate compound interest annually is given by. 
 
    CI = P(1 + R/100)^T
*/
#include<stdio.h>
#include<math.h>
int main(){
	//Variable Declarating
      int principle;
      int time;
      float temp;
      float rate;
      float ci;
	//Get input from USER 
       printf("Enter Principle amount :- ");
       scanf("%d",&principle);
       printf("Enter time :- ");
       scanf("%d",&time);
       printf("Enter rate :- ");
       scanf("%f",&rate);
	//Calculat data 
	   ci=principle*(pow((1+(rate/100)),time));
	//Show calculeted data
       printf("Compound Interest :- %f",ci);
	return 0;
}
