// Program of Armstrong Number in C Using For Loop & While Loop 
#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number using for loop
int isArmstrongForLoop(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;
    
    for (; number != 0; number /= 10) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
    }

    return sum == originalNumber;
}

// Function to check if a number is an Armstrong number using while loop
int isArmstrongWhileLoop(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int number;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is an Armstrong number using for loop
    if (isArmstrongForLoop(number)) {
        printf("%d is an Armstrong number using for loop.\n", number);
    } else {
        printf("%d is not an Armstrong number using for loop.\n", number);
    }

    // Check if the number is an Armstrong number using while loop
    if (isArmstrongWhileLoop(number)) {
        printf("%d is an Armstrong number using while loop.\n", number);
    } else {
        printf("%d is not an Armstrong number using while loop.\n", number);
    }

    return 0;
}
