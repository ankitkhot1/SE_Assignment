//WAP to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice 
#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort in ascending order
void bubbleSortAsc(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to perform bubble sort in descending order
void bubbleSortDesc(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to display an array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    int choice;

    // Input size of arrays
    printf("Enter size of arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    // Input elements of first array
    printf("Enter elements of first array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of second array
    printf("Enter elements of second array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    // Choose sorting order
    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &choice);

    // Sort first array based on user's choice
    if (choice == 1) {
        bubbleSortAsc(arr1, size);
    } else if (choice == 2) {
        bubbleSortDesc(arr1, size);
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Sort second array based on user's choice
    if (choice == 1) {
        bubbleSortAsc(arr2, size);
    } else if (choice == 2) {
        bubbleSortDesc(arr2, size);
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Display sorted arrays
    printf("Sorted first array: ");
    displayArray(arr1, size);
    printf("Sorted second array: ");
    displayArray(arr2, size);

    return 0;
}
