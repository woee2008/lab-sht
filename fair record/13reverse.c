/*
13reverse program.

Algorithm
1. Start.
2. Declare all required variables and initialize them where needed.
3. Read the necessary input values from the user (if input is required).
4. Process the input by applying the required conditions, loops, and calculations step by step.
5. Store intermediate and final results in appropriate variables.
6. Display the final output in the expected format.
7. Stop.
*/


/* START 
 * Input a number n 
 * SET sum = 0
 * Find the last digit using n%10
 * Add the digit to Sum
 * Remove the last digit using it n/10
 * Repeat steps 4-6 while no>0
 * Display sum
 * Stop*/

#include <stdio.h>
int main(){
  int n, r = 0;
  printf("Enter  number: ");
  scanf("%d", &n);
  while(n>0){
    r = r*10 + n%10;
    n = n/10;
  }
  printf("Reverse = %d \n", r);
  return 0;
}
