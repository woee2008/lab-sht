/*
Algorithm:
1. Start the program for 20fibonacci.
2. Read the required input values.
3. Execute the program logic and compute the result.
4. Display the output and stop.
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
