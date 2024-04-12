//Write a program in C to count the total number of words in a string. 
#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0;  // Flag to track whether we are currently inside a word

    // Iterate through the string
    while (*str != '\0') {
        // If current character is not a space and we are not inside a word, 
        // it means we encountered the start of a new word
        if (*str != ' ' && !inWord) {
            count++;
            inWord = 1;  // Set the flag to indicate we are inside a word
        }
        // If current character is a space, set the flag to indicate we are outside a word
        else if (*str == ' ') {
            inWord = 0;
        }
        str++;  // Move to the next character
    }
    return count;
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Allowing spaces in the input string

    int wordCount = countWords(str);
    printf("Total number of words in the string: %d\n", wordCount);

    return 0;
}
