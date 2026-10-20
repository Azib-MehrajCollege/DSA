#include <stdio.h>
int findSubstring(char mainStr[], char subStr[]) {
    int i = 0;
    while (mainStr[i]!='\n') {
        int j = 0;
        while (subStr[j]!='\n' && mainStr[i+j]==subStr[j]) {
            j++;
        }
        if (subStr[j] == '\n') {
            return i;
        }
        i++;
    }
    return -1;
}
int main() {
    char mainStr[100];
    printf("Enter the main string: ");
    fgets(mainStr, 100, stdin);
    char subStr[50];
    printf("Enter the substring: ");
    fgets(subStr, 50, stdin);
    int index = findSubstring(mainStr, subStr);
    if (index != -1) {
        printf("Substring found at index: %d", index);
    } else {
        printf("Substring not found");
    }
    return 0;
}
