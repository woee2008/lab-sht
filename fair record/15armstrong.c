/*
15armstrong program.

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
int n, original, r, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }

    if (sum == original)
        printf("Armstrong number \n");
    else
        printf("Not an Armstrong number \n");

    return 0;
}
