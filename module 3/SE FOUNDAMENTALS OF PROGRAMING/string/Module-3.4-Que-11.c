// Write a program in C to read a sentence and replace lowercase characters with 
//uppercase and vice versa. 
#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    while (*str != '\0') {
        if (islower(*str)) {
            *str = toupper(*str); // Convert lowercase to uppercase
        } else if (isupper(*str)) {
            *str = tolower(*str); // Convert uppercase to lowercase
        }
        str++;
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    toggleCase(sentence);

    printf("After toggling case: %s\n", sentence);

    return 0;
}
