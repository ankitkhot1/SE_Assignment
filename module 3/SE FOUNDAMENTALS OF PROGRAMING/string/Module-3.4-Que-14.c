//Write a program in C to combine two strings manually 
#include <stdio.h>

void combineStrings(char *str1, char *str2, char *combined) {
    // Copy characters from the first string to the combined string
    while (*str1 != '\0') {
        *combined = *str1;
        str1++;
        combined++;
    }

    // Copy characters from the second string to the combined string
    while (*str2 != '\0') {
        *combined = *str2;
        str2++;
        combined++;
    }

    *combined = '\0'; // Null-terminate the combined string
}

int main() {
    char str1[1000], str2[1000], combined[2000];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Call the function to combine the strings
    combineStrings(str1, str2, combined);

    printf("Combined string: %s\n", combined);

    return 0;
}
