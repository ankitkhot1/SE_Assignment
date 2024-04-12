//WAP to print factorial of given number
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Checking for negative numbers
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculating factorial and printing the result
        printf("Factorial of %d is %d\n", number, factorial(number));
    }

    return 0;
}
