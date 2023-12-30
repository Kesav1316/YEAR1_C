#include <stdio.h>

int main() {
    char str1[100] = "COMPUTER";
    char str2[100] = "SCI";
    int i;
    for (i = 0 ; i < sizeof(str1) ; i ++ ) {
        printf("%c",str1[i]);
        printf("%c",str2[i]);
    } 
}