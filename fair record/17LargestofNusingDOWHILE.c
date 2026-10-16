/*
17LargestofNusingDOWHILE program.

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
    int i = 0, largest = 0, num, N;

    printf("Enter N: ");
    scanf("%d", &N);

    do {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }

        i++;

    } while (i < N);

    printf("largest = %d", largest);

    return 0;
}

