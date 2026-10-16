/*
Algorithm:
1. Start the program for 23factorial.
2. Read the required input values.
3. Execute the program logic and compute the result.
4. Display the output and stop.
*/

#include <stdio.h>
int main(){
  int n,factorial;
  printf("Enter a number: ");
  scanf("%d", &n);
  for(int i = 0; i <= n; i++){
    factorial = factorial*i;
  }
  printf("factorial=%d", factorial);
  return 0;
}
