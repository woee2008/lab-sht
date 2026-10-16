/*
Algorithm:
1. Start the program for 15armstrong.
2. Read the required input values.
3. Execute the program logic and compute the result.
4. Display the output and stop.
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
