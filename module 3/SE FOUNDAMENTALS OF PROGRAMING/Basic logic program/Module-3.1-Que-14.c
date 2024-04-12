//WAP to find the largest of three numbers. 
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 as the largest initially
    int largest = num1;

    // Compare num2 with largest
    if (num2 > largest) {
        largest = num2;
    }

    // Compare num3 with largest
    if (num3 > largest) {
        largest = num3;
    }

    // Print the largest number
    printf("The largest number among %d, %d, and %d is: %d\n", num1, num2, num3, largest);

    return 0;
}
