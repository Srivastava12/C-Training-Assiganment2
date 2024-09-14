/*
   Write a C program to calculate the distance between the two points. 
 
    Test Data : 
    Input x1: 25 
    Input y1: 15 
    Input x2: 35 
    Input y2: 10 
    Expected Output: 
    Distance between the said points: 11.1803
*/
#include<stdio.h>
#include<math.h>
int main(){
	//Variable Declarating
      int x1,x2;
      int y1,y2;
      float s_points;
    //Get input from USER 
      printf("Input x1:");
      scanf("%d",&x1);
      printf("Input y1:");
      scanf("%d",&y1);
      printf("Input x2:");
      scanf("%d",&x2);
      printf("Input y2:");
      scanf("%d",&y2);     
	//Calculation of data 
	  s_points=sqrt((pow((x1-x2),2)+pow((y1-y2),2)));
	//Show calculeted data
      printf("\nDistance between the said points: %0.4f",s_points);
	return 0;
}
