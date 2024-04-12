// Convert school’s name in abbreviated form

#include <stdio.h>
#include <string.h>

void abbreviateSchoolName(char *schoolName);

int main() {
    char schoolName[100];
    
    // Ask the user to enter the school name
    printf("Enter the school name: ");
    fgets(schoolName, sizeof(schoolName), stdin);
    
    // Call the function to abbreviate the school name
    abbreviateSchoolName(schoolName);
    
    // Output the abbreviated school name
    printf("Abbreviated school name: %s\n", schoolName);
    
    return 0;
}

void abbreviateSchoolName(char *schoolName) {
    int i, j = 0;
    int len = strlen(schoolName);
    char abbreviated[100];
    
    // Convert the first character to uppercase
    abbreviated[0] = schoolName[0] >= 'a' && schoolName[0] <= 'z' ? schoolName[0] - 32 : schoolName[0];
    
    // Loop through the school name to find spaces and extract the first character after space
    for (i = 1; i < len; i++) {
        if (schoolName[i] == ' ') {
            abbreviated[++j] = schoolName[i + 1] >= 'a' && schoolName[i + 1] <= 'z' ? schoolName[i + 1] - 32 : schoolName[i + 1];
        }
    }
    
    abbreviated[++j] = '\0'; // Add null terminator to the abbreviated string
    
    strcpy(schoolName, abbreviated); // Copy the abbreviated string back to schoolName
}