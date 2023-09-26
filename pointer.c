#include <stdio.h>

int main() {
    int a , c , *r , *p;
    a = 5;
    c = 6;
    p = &a;
    r = &c;
    printf("The memory is: %p %p",p,r);

    return 0;
}



