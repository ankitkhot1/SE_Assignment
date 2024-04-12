// Write a program in C to remove characters from a string except alphabets.
#include <stdio.h>
#include <ctype.h>

void removeNonAlphabets(char *str) {
    char *ptr = str; // Pointer to iterate through the string

    // Loop through each character of the string
    while (*ptr != '\0') {
        if (isalpha(*ptr)) { // Check if the character is an alphabet
            *str = *ptr; // Copy the alphabet to the original string
            str++; // Move to the next position in the original string
        }
        ptr++; // Move to the next character in the string
    }

    *str = '\0'; // Null-terminate the string to mark the end
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeNonAlphabets(str);

    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}
