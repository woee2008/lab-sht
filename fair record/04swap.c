/*
04swap program.

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

Declare three integer variables: temp, a, and b.

Assign 3 to a and 5 to b.

Display the values of a and b.

Assign the value of a to temp.

Assign the value of b to a.

Assign the value of temp to b.

Display the swapped values of a and b.

Stop */

#include <stdio.h>
int main(){
  int temp, a, b;

  a = 3;
  b = 5;

  printf("a: %d\n", a);
  printf("b: %d\n", b);
  temp = a;
  a = b;
  b = temp;


  printf("swapped a: %d\n", a);
  printf("swapped b: %d\n", b);
}
