/*
21series program.

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
3. Set sum = 0
4. For i = 1 to n, add i*i to sum;
5. Display sum
6. Stop.
*/

// Program
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }

    printf("Sum = %d", sum);

    return 0;
}
