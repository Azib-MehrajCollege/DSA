#include <stdio.h>
#define MAX_SIZE 100 // Maximum capacity of the array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// delete at end
void deleteAtEnd(int arr[], int *size) {
    if (*size <= 0) {
        printf("Error: Array Underflow! Cannot delete.\n");
        return;
    }
    (*size)--;
}
// delete at start
void deleteAtStart(int arr[], int *size) {
    if (*size <= 0) {
        printf("Error: Array Underflow! Cannot delete.\n");
        return;
    }
    // Shift left by 1
    for (int i = 1; i < *size; i++) {
        arr[i-1] = arr[i];
    }
    (*size)--;
}
// delete at any index/position
void deleteAtPosition(int arr[], int *size, int index) {
    if (*size <= 0) {
        printf("Error: Array Underflow! Cannot delete.\n");
        return;
    }
    // Validate the index boundaries
    if (index < 0 || index >= *size) {
        printf("Error: Invalid index! Must be between 0 and %d\n", *size);
        return;
    }
    // Shift left by 1
    for (int i = index+1; i < *size; i++) {
        arr[i-1] = arr[i];
    }
    (*size)--;
}
int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; 
    int size = 5;                             
    printf("Original array:\n");
    display(arr, size);
    //delete at end
    deleteAtEnd(arr, &size);
    display(arr, size);
    // delete at start
    deleteAtStart(arr, &size);
    display(arr, size);
    // delete at 
    deleteAtPosition(arr, &size, 1);
    display(arr, size);
    return 0;
}
