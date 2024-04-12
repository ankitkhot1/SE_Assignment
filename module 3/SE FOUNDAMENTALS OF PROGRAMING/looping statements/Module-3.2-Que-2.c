//WAP to accept 5 numbers from user and display all numbers 
#include <stdio.h>

int main() {
    int numbers[5]; // Array to store the numbers
    printf("Enter 5 numbers:\n");

    // Accepting numbers from the user
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // Displaying the numbers
    printf("You entered: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
