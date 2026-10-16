/*
Algorithm:
1. Start the program for 21series.
2. Read the required input values.
3. Execute the program logic and compute the result.
4. Display the output and stop.
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
