//Store 5 numbers in array and sort it in ascending order 
#include <stdio.h>

#define SIZE 5

// Function to perform bubble sort in ascending order
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[SIZE];

    // Input 5 numbers from the user
    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sort the array in ascending order
    bubbleSort(numbers, SIZE);

    // Display the sorted array
    printf("\nSorted numbers in ascending order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
