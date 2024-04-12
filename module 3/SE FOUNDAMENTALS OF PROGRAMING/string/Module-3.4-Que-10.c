// Write a program in C to extract a substring from a given string 
#include <stdio.h>

void extractSubstring(char *source, int start, int length, char *destination) {
    int i;
    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }
    destination[i] = '\0'; // Null-terminate the destination string
}

int main() {
    char source[1000], destination[1000];
    int start, length;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    extractSubstring(source, start, length, destination);

    printf("Substring extracted from the given string: %s\n", destination);

    return 0;
}
