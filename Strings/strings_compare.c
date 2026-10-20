#include <stdio.h>
int strCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 1;
        }
        i++;
    }
    return 0;
}
int main() {
    char s1[] = "apple";
    char s2[] = "apple";
    if (strCompare(s1,s2)) printf("equal");
    else printf("not equal");
    return 0;
}
