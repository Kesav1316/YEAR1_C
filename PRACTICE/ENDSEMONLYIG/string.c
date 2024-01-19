#include <stdio.h>

int main() {
    char a[] = {'h','\0'};
    //char c = "h";
    char b[10] = "abc";
    int i =0;
    while(a[i] != '\0') {
        printf("%c",a[i]);
        i++;
    }
    printf("%s",b);
}