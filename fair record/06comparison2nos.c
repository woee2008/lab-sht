/*
Algorithm:
1. Start the program for 06comparison2nos.
2. Read the required input values.
3. Execute the program logic and compute the result.
4. Display the output and stop.
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

