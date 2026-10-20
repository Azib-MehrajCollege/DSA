#include <stdio.h>
void strConcat(char str1[], char str2[], char concat[]) {
    int i=0;
    while (str1[i]!='\0') {
        concat[i]=str1[i];
        i++;
    }
    int j=0;
    i--;
    while (str2[j]!='\0') {
        concat[i]=str2[j];
        j++;
        i++;
    }
    concat[i-1]='\0';
}
int main() {
    char str1[50];
    printf("Enter ist string: ");
    fgets(str1,50,stdin);
    char str2[50];
    printf("Enter 2nd string: ");
    fgets(str2,50,stdin);
    char concat[sizeof(str1)+sizeof(str2)];
    strConcat(str1,str2,concat);
    puts(str1);
    puts(str2);
    printf("Concatinated string: ");
    puts(concat);
    return 0;
}