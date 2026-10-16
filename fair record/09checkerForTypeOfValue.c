/*
09checkerForTypeOfValue program.

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
    char ch;

    // Input character from user
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check for alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
        
        // Check specifically for lowercase
        if (ch >= 'a' && ch <= 'z') {
            printf("It is a lowercase alphabet.\n");
        } else {
            printf("It is an uppercase alphabet.\n");
        }
    } 
    // Check for digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } 
    // Otherwise it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
