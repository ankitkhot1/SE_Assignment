// WAP to find reverse of string using recursion
#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    if (start >= end)
        return;
    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Recur with smaller substring
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    // Call the reverseString function
    reverseString(str, 0, strlen(str) - 1);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
