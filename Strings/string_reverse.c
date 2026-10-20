#include <stdio.h>
void strRev(char str[]) {
    int i=0,count=0;
    while(str[i]!='\n') {
        count++;
        i++;
    }
    count--;
    i=0;
    while (i<count) {
        char temp = str[i];
        str[i] = str[count];
        str[count] = temp;
        count--;
        i++;
    }
    
}
int main() {
    char str[100];
    printf("Enter a string to reverse: ");
    fgets(str,100,stdin);
    strRev(str);
    printf("Reversed string: ");
    puts(str);
    return 0;
}