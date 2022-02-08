/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int sub1, sub2;
   float total, average;
   
   printf("Enter the marks of subject 1:\n");
   scanf("%d, &sub1");
   
   printf("Enter the marks of subject 2:\n");
   scanf("%d, &sub2");
   
   total = sub1 + sub2; 
   average = total / 2;
    
   printf("The Total marks is:.2f\n", total);
   printf("\nThe Average marks is:2f\n", average);
   
  return 0;
}

