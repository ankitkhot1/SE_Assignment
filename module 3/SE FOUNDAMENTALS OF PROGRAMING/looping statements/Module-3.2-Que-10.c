//Write a program you have to make a summation of first and last Digit. (E.g., 
//1234 Ans: -5) 
#include <stdio.h>

int sumFirstLastDigit(int number) {
    int lastDigit, firstDigit;
    
    lastDigit = number % 10; // Extract the last digit
    while (number >= 10) {
        number /= 10; // Remove the last digit
    }
    firstDigit = number; // Whatever left after removing last digit will be the first digit

    return firstDigit + lastDigit; // Return the summation of the first and last digits
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and print the summation of the first and last digits
    printf("Summation of the first and last digits is %d\n", sumFirstLastDigit(number));

    return 0;
}
