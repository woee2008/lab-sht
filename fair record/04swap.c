/*
Algorithm:
1. Start the program for 04swap.
2. Read the required input values.
3. Execute the program logic and compute the result.
4. Display the output and stop.
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
