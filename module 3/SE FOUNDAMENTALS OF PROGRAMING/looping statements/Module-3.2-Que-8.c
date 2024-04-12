//Write a program to find out the max from given number (E.g., No: -1562 
//Max number is 6) 
#include <stdio.h>

int findMaxDigit(int number) {
    int maxDigit = number % 10; // Initialize maxDigit with the last digit of the number
    number = number < 0 ? -number : number; // Make sure the number is positive

    // Loop to find the maximum digit
    while (number != 0) {
        int digit = number % 10; // Extract the current digit
        if (digit > maxDigit) {
            maxDigit = digit; // Update maxDigit if the current digit is greater
        }
        number /= 10; // Move to the next digit
    }
    return maxDigit;
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find and print the maximum digit
    printf("Max number is %d\n", findMaxDigit(number));

    return 0;
}
