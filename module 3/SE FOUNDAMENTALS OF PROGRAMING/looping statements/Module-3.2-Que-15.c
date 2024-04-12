//Calculate sum of 10 numbers using of while loop 
#include <stdio.h>

int main() {
    int count = 0; // Counter to keep track of how many numbers have been entered
    int sum = 0; // Variable to store the sum of the entered numbers
    int number; // Variable to hold each number entered by the user

    printf("Enter 10 numbers:\n");

    // Loop to input numbers and calculate sum
    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);
        sum += number;
        count++;
    }

    printf("Sum of the 10 numbers is: %d\n", sum);

    return 0;
}
