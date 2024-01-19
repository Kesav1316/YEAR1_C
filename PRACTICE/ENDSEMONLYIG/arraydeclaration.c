#include <stdio.h>

int main() {
    int a[] = {1,2,3,4};
    int b[100] = {1,2,3,4};
    int sizea,sizeb;
    sizea = sizeof(a)/sizeof(int);
    sizeb = sizeof(b)/sizeof(int);
    printf("Size of a is %d",sizea);
    printf("Size of b is %d",sizeb);
}