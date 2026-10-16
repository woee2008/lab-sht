/*
20fibonacci program.

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
int n, i, c;
int a = 1;
int b = 1;
printf("Enter the no. of terms \t");
scanf("%d", &n);
for(i = 1; i <= n; i++) {
  printf("%d \n", a);
  c = a+b;
  a = b;
  b = c;
}
return 0;
}
