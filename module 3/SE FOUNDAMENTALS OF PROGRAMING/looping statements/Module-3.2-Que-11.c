//Accept 5 names from user at run time. 
#include <stdio.h>

int main() {
    char names[5][50]; // Array to store 5 names, each name can have up to 49 characters (plus null terminator)
    
    // Input 5 names from the user
    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Displaying the names entered by the user
    printf("\nNames entered by the user:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
