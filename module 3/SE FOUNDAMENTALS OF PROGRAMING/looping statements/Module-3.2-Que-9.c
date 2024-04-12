//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>

int sumDigits(int number) {
    int sum = 0;
    number = number < 0 ? -number : number; // Make sure the number is positive

    // Loop to sum up the digits
    while (number != 0) {
        sum += number % 10; // Extract the current digit and add it to sum
        number /= 10; // Move to the next digit
    }
    return sum;
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and print the summation of the digits
    printf("Summation of the digits is %d\n", sumDigits(number));

    return 0;
}
