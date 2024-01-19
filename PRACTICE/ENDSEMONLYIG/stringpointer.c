#include <stdio.h>

int main() {
    char s[] = "hi";
    char *ptr;
    ptr = s;
    printf("%c",*ptr);
    while(*ptr != '\0') {
        printf("%c",*ptr);
        ptr++;
    }
}