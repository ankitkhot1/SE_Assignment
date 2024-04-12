//WAP Find out length of string without using inbuilt function 
#include <stdio.h>

// Function to find the length of a string without using inbuilt function
int stringLength(char str[]) {
    int length = 0;
    // Iterate over each character of the string until null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str); // Assuming input does not contain spaces
    
    int length = stringLength(str);
    printf("Length of the string: %d\n", length);
    
    return 0;
}
