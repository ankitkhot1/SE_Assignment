// WAP to perform Palindrome number using for loop and function 
#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;
    
    // Reverse the number
    for (; num != 0; num /= 10) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }
    
    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        return 1; // Palindrome
    } else {
        return 0; // Not a palindrome
    }
}

int main() {
    int num;
    
    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is palindrome or not
    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    
    return 0;
}
