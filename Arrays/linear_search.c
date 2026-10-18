#include <stdio.h>
int main() {
    int arr[] = {2,5,3,1,3,6};
    int size = sizeof(arr)/sizeof(int);
    int target = 3;
    int found = 0;
    for (int i=0; i<size; i++) {
        if (arr[i]==target) {
            printf("number found at index %d\n", i);
            found = 1; //all dups also
        }
    }
    if (!found) printf("number not found!");
    return 0;
}