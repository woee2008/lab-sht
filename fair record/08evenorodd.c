/*
08evenorodd program.

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

Declare an integer variable num.

Read the number num from the user.

Check whether num % 2 == 0.

If the condition is true, print "Even number".

Otherwise, print "Odd number".

Stop */
#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(num%2 == 0)
    printf("Even number");
  else 
    printf("Odd number");
  return 0;
}
