#include <stdio.h>
int strLen(char str[]) {
    int len=0;
    while (str[len]!='\0') {
        len++;
    }
    return len-1;
}
int main() {
    char str[100];
    fgets(str,100,stdin);
    printf("Length of string : %d", strLen(str));
    return 0;
}