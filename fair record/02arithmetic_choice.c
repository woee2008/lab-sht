/*
02arithmetic_choice program.

Algorithm
1. Start.
2. Declare all required variables and initialize them where needed.
3. Read the necessary input values from the user (if input is required).
4. Process the input by applying the required conditions, loops, and calculations step by step.
5. Store intermediate and final results in appropriate variables.
6. Display the final output in the expected format.
7. Stop.
*/

/*
 * 1.Start
 * 2. Include <stdio.h>
 * 3. Declare variables a, b for operands and sum, diff, prod, quot, rem for the results
 * 4. Read the values of a and b from the user
 * 5. Calculate
 *     - Addition
 *     - Subtraction
 *     - Multiplication
 *     - Division
 *     - Modulus
 *  6. Display all results 
 *  7. Stop*/

#include <stdio.h>

#include <stdio.h>

int main() {
    // Declare variables for operands and results
    int a, b;
    int sum, diff, prod, quot, rem;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Error: Division and modulus by zero are not allowed.\n");
        return 1;
    }

    // Calculate operations
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;
    rem = a % b;

    // Display all results
    printf("\n--- Results ---\n");
    printf("Addition (Sum): %d + %d = %d\n", a, b, sum);
    printf("Subtraction (Difference): %d - %d = %d\n", a, b, diff);
    printf("Multiplication (Product): %d * %d = %d\n", a, b, prod);
    printf("Division (Quotient): %d / %d = %d\n", a, b, quot);
    printf("Modulus (Remainder): %d %% %d = %d\n", a, b, rem);

    return 0;
}
