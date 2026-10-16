/*
Algorithm:
1. Start the program for 08evenorodd.
2. Read the required input values.
3. Execute the program logic and compute the result.
4. Display the output and stop.
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
