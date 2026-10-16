/*
07comparison3nos program.

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

Declare three integer variables a, b, and c.

Ask the user to enter three numbers.

Read the three numbers and store them in a, b, and c.

Check whether a > b and a > c.

If true, display "A is the greatest".

Otherwise, check whether b > a and b > c.

If true, display "B is the greatest".

Otherwise, display "C is the greatest".

Stop*/
#include<stdio.h>
int main()
{
  int a, b, c;
  printf("Enter 3 nos.: ");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c)
    printf("A is the greatest \n");
  else if (b > a && b > c)
    printf("B is the greatest \n");
  else
    printf("C is the greatest \n");
  return 0;
}

