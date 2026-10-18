#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size-1;
    while (low<=high) {
        int mid = low+(high-low)/2;
        if (arr[mid]==target)  return mid; 
        if (arr[mid]<target) {
            low = mid+1;
        } 
        else {
            high = mid-1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = binarySearch(arr, size, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    return 0;
}
