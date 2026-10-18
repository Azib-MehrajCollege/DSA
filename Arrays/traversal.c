#include <stdio.h>
void traversal(int arr[],int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    int arr[n]; //not recomended if you want dynamic allocation use malloc
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    traversal(arr,n);
    return 0;
}