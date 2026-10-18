#include <stdio.h>
int main() {
    int arr[] = {2,4,3,6,5,1};
    int n=6;
    for (int i=0; i<n; i++) {
        int swapped=0;
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped=1;
            }
        }
        if(!swapped) break;
    }
    for (int i=0; i<6; i++) {
        printf("%d \t", arr[i]);
    }
    return 0;
}