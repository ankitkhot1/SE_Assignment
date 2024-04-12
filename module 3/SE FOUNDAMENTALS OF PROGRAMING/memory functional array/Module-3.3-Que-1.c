//Write a program to find out the max number from given array using function
#include <stdio.h>

// Function to find the maximum number in an array
int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the maximum
    
    // Iterate through the array to find the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int arr[] = {10, 23, 5, 67, 89, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the function to find the maximum number
    int maxNumber = findMax(arr, size);

    printf("The maximum number in the array is: %d\n", maxNumber);

    return 0;
}
