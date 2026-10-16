/*
06comparison2nos program.

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

Declare two integer variables a and b.

Ask the user to enter two numbers.

Read the two numbers and store them in a and b.

Check whether a is greater than b.

If true, display "A is greater".

Otherwise, display "B is greater".

Stop*/
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter 2 numbers to compare:" );
  scanf("%d , %d", &a, &b);
  if (a > b)
    printf("A is greater \n");
  else
    printf("B is greater \n");
  return 0;
}

