#include <stdio.h>
#define MAX_SIZE 100 // Maximum capacity of the array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// insert at end
void insertAtEnd(int arr[], int *size, int val) {
    if (*size >= MAX_SIZE) {
        printf("Error: Array Overflow! Cannot insert.\n");
        return;
    }
    arr[*size] = val;
    (*size)++;
}
// insert at start
void insertAtStart(int arr[], int *size, int val) {
    if (*size >= MAX_SIZE) {
        printf("Error: Array Overflow! Cannot insert.\n");
        return;
    }
    // Shift right by 1
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = val;
    (*size)++;
}

// insert at any index/position
void insertAtPosition(int arr[], int *size, int val, int index) {
    if (*size >= MAX_SIZE) {
        printf("Error: Array Overflow! Cannot insert.\n");
        return;
    }
    // Validate the index boundaries
    if (index < 0 || index > *size) {
        printf("Error: Invalid index! Must be between 0 and %d\n", *size);
        return;
    }
    // Shift right by 1
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = val;
    (*size)++;
}

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; 
    int size = 5;                             
    printf("Original array:\n");
    display(arr, size);
    //insert at end
    insertAtEnd(arr, &size, 60);
    display(arr, size);
    // insert at start
    insertAtStart(arr, &size, 5);
    display(arr, size);
    // insert at 
    insertAtPosition(arr, &size, 99, 3);
    display(arr, size);
    return 0;
}
