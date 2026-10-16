/*
14palindrome program.

Algorithm
1. Start.
2. Declare all required variables and initialize them where needed.
3. Read the necessary input values from the user (if input is required).
4. Process the input by applying the required conditions, loops, and calculations step by step.
5. Store intermediate and final results in appropriate variables.
6. Display the final output in the expected format.
7. Stop.
*/

#include <stdio.h>
int main(){
  int n, r = 0;
  int constant;
  printf("Enter  number: ");
  scanf("%d", &n);

  constant = n;
  while(n>0){
    r = r*10 + n%10;
    n = n/10;
  }

  if(r == constant) 
    printf("it is palindrome \n");

  else 
    printf("it is not palindrome \n");

  return 0;
}
