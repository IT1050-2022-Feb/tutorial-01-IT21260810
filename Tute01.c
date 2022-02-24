/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  float mrk1,mrk2,mrk3,avg=0,tot=0; //variable decleration
  
  printf("\nInput marks of the first module : ");
  scanf("%f",&mrk1);

  printf("\nInput marks of the second module : ");
  scanf("%f",&mrk2);


tot=mrk1+mrk2; // to calculate total
avg=tot/2.0;  // to calculate average

printf("\nAverage : %.2f",avg);





  return 0;
}


