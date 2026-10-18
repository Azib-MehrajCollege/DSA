#include <stdio.h>
void display(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int marr[]) {
    // 1. Copy all elements from the first array
    for (int i=0; i<size1; i++) {
        marr[i] = arr1[i];
    }
    // 2. Copy all elements from the second array
    for (int j=0; j<size2; j++) {
        marr[size1 + j] = arr2[j];
    }
}
int main() {
    int arr1[] = {10, 20, 30};
    int size1 = 3;

    int arr2[] = {40, 50, 60, 70};
    int size2 = 4;

    // The third array must be big enough to hold both arrays combined
    int marr[size1 + size2]; 
    int msize = size1 + size2;
    printf("Array 1: ");
    display(arr1, size1);
    printf("Array 2: ");
    display(arr2, size2);
    // Merged
    mergeArrays(arr1, size1, arr2, size2, marr);
    printf("Merged Array: ");
    display(marr, msize);
    return 0;
}
