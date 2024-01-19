#include <stdio.h>

int main() {
    char a[5];
    fgets(a,5,stdin);
    printf("%c",a[2]);
}
