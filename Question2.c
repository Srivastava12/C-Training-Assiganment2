/* C program to calculate total average and percentage of five subjects 
 
    Example Input 
    Enter marks of five subjects: 95 76 85 90 89 
    Output 
 
    Total = 435 
    Average = 87 
    Percentage = 87.00 
*/
#include<stdio.h>
int main(){
	//Variable Declarating
	  float temp;
	  register float total=0;
      register float i;
	//Get input from USER 
       printf("Enter marks of five subject :- ");
       for(i=0;i<5;i++){
       	    scanf("%f",&temp);
       	    total=total+temp;
	   }
	//Calculat data & Show calculeted data
       printf("Total :- %0.2f",total);
       printf("\nAverage :- %0.2f",total/5);
       printf("\nPercentage :- %0.2f%%",total*100/500);
	return 0;
}
