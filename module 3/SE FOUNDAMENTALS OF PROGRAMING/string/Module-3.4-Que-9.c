//Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>

int maxLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int max_length = maxLength(str);
    printf("Maximum number of characters in the string: %d\n", max_length);

    return 0;
}
