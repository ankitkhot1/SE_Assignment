// Calculate the Sum of Natural Numbers Using the While Loop 
#include <stdio.h>

int main() {
    int limit, sum = 0, i = 1;

    // Input the limit from the user
    printf("Enter the limit: ");
    scanf("%d", &limit);

    // Calculate the sum of natural numbers using a while loop
    while (i <= limit) {
        sum += i; // Add the current number (i) to the sum
        i++;      // Move to the next number
    }

    // Print the sum
    printf("The sum of natural numbers up to %d is: %d\n", limit, sum);

    return 0;
}
