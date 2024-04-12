// WAP to accept 5 numbers from user and check entered number is even or odd 
//using of array 
#include <stdio.h>

#define NUMBERS 5

int main() {
    int numbers[NUMBERS];
    
    // Input 5 numbers from the user
    printf("Enter %d numbers:\n", NUMBERS);
    for (int i = 0; i < NUMBERS; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Check if each number is even or odd
    printf("\nResult:\n");
    for (int i = 0; i < NUMBERS; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }
    
    return 0;
}
