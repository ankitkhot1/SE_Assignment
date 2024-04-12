//.calculate the Factorial of a Given Number using while loop 
#include <stdio.h>

int main() {
    int number, factorial = 1;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0; // Exit the program if the number is negative
    }

    // Calculate factorial using while loop
    int i = 1;
    while (i <= number) {
        factorial *= i; // Multiply factorial by current value of i
        i++;
    }

    // Print the factorial
    printf("Factorial of %d is %d\n", number, factorial);

    return 0;
}
