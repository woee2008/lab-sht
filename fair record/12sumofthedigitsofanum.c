/*
12sumofthedigitsofanum program.

Algorithm
1. Start.
2. Declare all required variables and initialize them where needed.
3. Read the necessary input values from the user (if input is required).
4. Process the input by applying the required conditions, loops, and calculations step by step.
5. Store intermediate and final results in appropriate variables.
6. Display the final output in the expected format.
7. Stop.
*/

/*Start

Declare two integer variables n and sum. Initialize sum = 0.

Read the number n from the user.

Repeat steps 5 and 6 while n > 0.

Find the last digit using n % 10 and add it to sum.

Remove the last digit using n = n / 10.

Display the value of sum.

Stop */
#include <stdio.h>
int main(){
  int n,sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(n>0){
    sum = sum + n%10;
    n = n/10;
  }
  printf("Sum of digits = %d \n", sum);
  return 0;
}
