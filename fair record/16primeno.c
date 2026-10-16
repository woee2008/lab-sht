/*
16primeno program.

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

int main() {
    int n, i = 2, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i < n) {
        if (n % i == 0) {
            count++;
            break;
        }
        i++;
    }

    if (n > 1){
      if (count == 0)
         printf("Prime number");
  }
    else
        printf("Not a prime number");

    return 0;
}

