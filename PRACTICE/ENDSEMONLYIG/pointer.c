#include <stdio.h>

int main() {
    int i = 5;
    int *a;
    a = &i;
    printf("The memory of i is %dThe value of i is %d", a,*a);
}