#include <stdio.h>
#include <stdlib.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
int main() {
    int num, result;
    // Input the number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    // Check if the input is non-negative
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        // Call the recursive function
        result = factorial(num);
        printf("The factorial of %d is: %d\n", num, result);
    }
    return 0;
}
