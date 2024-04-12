//WAP to print table up to given numbers
#include <stdio.h>

int main() {
    int number, limit;

    // Input the number and the limit
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the limit: ");
    scanf("%d", &limit);

    // Printing the multiplication table
    printf("Multiplication table for %d up to %d:\n", number, limit);
    for (int i = 1; i <= limit; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
