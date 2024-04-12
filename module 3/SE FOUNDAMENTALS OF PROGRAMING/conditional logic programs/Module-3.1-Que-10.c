//. WAP to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is positive or negative
    if (num > 0) {
        printf("The number %d is positive.\n", num);
    } else if (num < 0) {
        printf("The number %d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }
    
    return 0;
}
