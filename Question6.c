/*
  Write a C program to calculate a bike’s average consumption from the given total distance 
  (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point). 
 
    Test Data : 
    Input total distance in km: 350 
    Input total fuel spent in liters: 5 
    Expected Output: 
    Average consumption (km/lt) 70.000
*/
#include<stdio.h>
int main(){
	//Variable Declarating
      float km;
      int l_km;
	//Get input from USER 
      printf("Input total distance in km: ");
      scanf("%f",&km);
      printf("Input total fuel spent in liters: ");
      scanf("%d",&l_km);
	//Calculation of data & Show calculeted data
	  printf("\nAverage consumption (km/lt) %0.3f",(km/l_km));
	return 0;
}
