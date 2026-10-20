#include <stdio.h>
void strCpy(char str[], char cpyStr[]) {
    int i=0;
    while (str[i]!='\0') {
        cpyStr[i]=str[i];
        i++;
    }
}
int main() {
    char str[100];
    fgets(str,100,stdin);
    char cpyStr[100];
    strCpy(str,cpyStr);
    printf("this is a copy string: ");
    puts(cpyStr);
    return 0;
}