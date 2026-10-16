/*
11sumandAvgNnos program.

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
1. Start
2. Input n
3. Set i = 1, sum = 0
4. Repeat while i <= n:
     a. sum = sum + i
     b. Increment i by 1
5. If n > 0:
     a. average = sum / n
6. Display sum and average
7. Stop
*/

#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int sum = 0;
    float average;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    if (n > 0) {
        average = (float)sum / n;
        printf("Sum of first %d natural numbers : %d \n", n, sum);
        printf("Average of first %d natural numbers : %.2f \n", n, average);
    } else {
        printf("Please enter a positive integer.\n");
    }
    return 0;
}
