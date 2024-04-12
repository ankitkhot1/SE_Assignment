// Write a program in C to find the number of times a given word 'is' appears in 
//the given string. 
#include <stdio.h>
#include <string.h>

int countOccurrences(char *str, char *word) {
    int count = 0;
    int wordLength = strlen(word);
    
    // Iterate through the string
    while (*str != '\0') {
        // If the word is found at the current position
        if (strncmp(str, word, wordLength) == 0) {
            // Check if it's a standalone word (i.e., it's not part of another word)
            if ((*(str + wordLength) == ' ' || *(str + wordLength) == '\0') &&
                (*(str - 1) == ' ' || str == str)) {
                count++;
            }
        }
        str++;
    }
    return count;
}

int main() {
    char str[1000];
    char word[] = "is";

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int occurrences = countOccurrences(str, word);

    printf("The word 'is' appears %d times in the given string.\n", occurrences);

    return 0;
}
