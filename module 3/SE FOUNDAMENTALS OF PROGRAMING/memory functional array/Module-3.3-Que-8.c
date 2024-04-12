//WAP to reverse a string and check that the string is palindrome or not 
#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Function to check if a string is palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character from fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Reverse the string
    reverseString(str);
    printf("Reversed string: %s\n", str);

    // Check if the original string is a palindrome
    if (isPalindrome(str)) {
        printf("The original string is a palindrome.\n");
    } else {
        printf("The original string is not a palindrome.\n");
    }

    return 0;
}


