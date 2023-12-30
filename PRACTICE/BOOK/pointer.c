#include <stdio.h>

int main() {
    int i =3;
    int *j;
    j = &i;
    printf("Memory address is %u",j);
    printf("Value is %d",*j);\
    
}