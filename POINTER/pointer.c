//USE %p to print pointers - memory address
#include <stdio.h>

int main() {
    int a , c , x , y , *r , *p;
    a = 5;
    c = 6;
    p = &a; //MEMORY ADDRESS STORES AT POINTER
    r = &c;
    x = *p; //*pointer GIVES VALUE IN MEMORY ADDRESS
    y = *r;
    printf("The memory is: %p\n%p\n%d\n%d",p,r,x,y);

    return 0;
}   



