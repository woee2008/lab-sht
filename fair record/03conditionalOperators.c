/*
03conditionalOperators program.

Algorithm
1. Start.
2. Declare all required variables and initialize them where needed.
3. Read the necessary input values from the user (if input is required).
4. Process the input by applying the required conditions, loops, and calculations step by step.
5. Store intermediate and final results in appropriate variables.
6. Display the final output in the expected format.
7. Stop.
*/

/* Start
 * Include library <stdio.h>
 * Declare a, b, c and largest
 * Read three integers from user
 * Find largest using nested conditional operator
 * Check whether a is even or odd
 * Display all the results
 * Stop */

#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("\nLargest number: %d\n", largest);
    printf("%d is %s\n", a, (a % 2 == 0) ? "Even" : "Odd");

    return 0;
}
