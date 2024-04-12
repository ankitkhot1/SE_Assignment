// Write a program in C to count the total number of vowels or consonants in a 
//string.
#include <stdio.h>
#include <ctype.h>

int countVowels(char *str) {
    int count = 0;
    while (*str != '\0') {
        char ch = tolower(*str); // Convert to lowercase for case-insensitivity
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int countConsonants(char *str) {
    int count = 0;
    while (*str != '\0') {
        char ch = tolower(*str); // Convert to lowercase for case-insensitivity
        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowels = countVowels(str);
    int consonants = countConsonants(str);

    printf("Total number of vowels in the string: %d\n", vowels);
    printf("Total number of consonants in the string: %d\n", consonants);

    return 0;
}
