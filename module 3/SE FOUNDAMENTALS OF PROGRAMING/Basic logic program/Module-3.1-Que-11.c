//WAP to find number is even or odd using ternary operator 

#include <stdio.h>

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is even or odd using ternary operator
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
    
    return 0;
}
