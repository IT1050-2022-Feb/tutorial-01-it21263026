/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1,mark2;
  float average;

   
  printf("enter first mark:");
  scanf("%d",&mark1);

  printf("enter second mark:");
  scanf("%d",&mark2);

  average=(mark1+mark2)/2;

  printf("average maks is:%.2f\n",average);
  
  return 0;
}

