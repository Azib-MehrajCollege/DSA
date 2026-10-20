#include <stdio.h>
int strPalindrome(char str[]) {
    int i=0,count=0;
    while(str[i]!='\n') {
        count++;
        i++;
    }
    count--;
    i=0;
    while (i<count) {
        if (str[i]!=str[count]) {
            return 0;
        }
        count--;
        i++;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    if(strPalindrome(str)) printf("is palindrome");
    else printf("not palindrome");
    return 0;
}