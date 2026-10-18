#include <stdio.h>
void display(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void splitArray(int origarr[], int origSize, int splitIndex, 
                int arr1[], int *size1, 
                int arr2[], int *size2) {
                    
    //elements from 0 up to splitIndex go to array arr1
    *size1 = 0;
    for (int i=0; i<splitIndex; i++) {
        arr1[i] = origarr[i];
        (*size1)++;
    }

    // elements from splitIndex to the end go to array arr2
    *size2 = 0;
    for (int i=splitIndex; i<origSize; i++) {
        arr2[i - splitIndex] = origarr[i];
        (*size2)++;
    }
}
int main() {
    int orgi[] = {10, 20, 30, 40, 50, 60, 70};
    int origSize = 7; 
    // split index
    int splitIndex = 3; 
    // Validate split index
    if (splitIndex < 0 || splitIndex > origSize) {
        printf("Error: Invalid split index!\n");
        return 1;
    }

    int arr1[splitIndex];
    int arr2[origSize - splitIndex];
    int size1, size2;
    printf("Original Array: ");
    display(orgi, origSize);
    // split
    splitArray(orgi, origSize, splitIndex, arr1, &size1, arr2, &size2);
    printf("Left Array: ");
    display(arr1, size1);
    printf("Right Array: ");
    display(arr2, size2);
    return 0;
}
