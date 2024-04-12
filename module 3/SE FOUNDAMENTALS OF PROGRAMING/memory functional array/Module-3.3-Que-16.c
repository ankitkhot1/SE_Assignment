//Accept 5 numbers from user and perform sum of array
#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE];
    int sum = 0;

    // Input 5 numbers from the user
    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the array elements
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }

    // Display the sum
    printf("\nSum of the array elements: %d\n", sum);

    return 0;
}
