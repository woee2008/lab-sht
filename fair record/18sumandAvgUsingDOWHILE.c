/*
18sumandAvgUsingDOWHILE program.

Algorithm
1. Start.
2. Declare all required variables and initialize them where needed.
3. Read the necessary input values from the user (if input is required).
4. Process the input by applying the required conditions, loops, and calculations step by step.
5. Store intermediate and final results in appropriate variables.
6. Display the final output in the expected format.
7. Stop.
*/

#include<stdio.h>
int main(){
  int n,i = 0, num;
  int sum = 0;
  float avg;

  printf("How many numbers to find avg and sum of: ");
  scanf("%d", &n);

  printf("enter a number: \n");
  do {
    scanf("%d", &num);
    sum= sum + num;
    i++;
  }while(i<=n);

  avg = sum/n;
  printf("Sum = %d \n", sum);
  printf("avg = %f \n", avg);
  return 0;
}
