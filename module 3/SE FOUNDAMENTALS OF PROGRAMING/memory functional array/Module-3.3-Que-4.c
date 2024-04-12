//WAP to find factorial using recursion 
#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive case: factorial of n is n * factorial(n-1)
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    unsigned long long fact;

    // Input the number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error! Factorial of a negative number is undefined.\n");
    } else {
        // Call the factorial function
        fact = factorial(num);
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
