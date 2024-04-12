// WAP to accept 5 students name and store it in array
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50
#define NUM_STUDENTS 5

int main() {
    char studentNames[NUM_STUDENTS][MAX_LENGTH];

    // Input names of 5 students from the user
    printf("Enter names of %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: ", i + 1);
        fgets(studentNames[i], MAX_LENGTH, stdin);

        // Remove the newline character if present
        if (studentNames[i][strlen(studentNames[i]) - 1] == '\n') {
            studentNames[i][strlen(studentNames[i]) - 1] = '\0';
        }
    }

    // Display the names of the students
    printf("\nNames of students:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, studentNames[i]);
    }

    return 0;
}
