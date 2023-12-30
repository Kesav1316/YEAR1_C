#include <stdio.h>
void display(int *);
int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for ( int i = 0 ; i < 10 ; i ++ ) {
        display(&a[i]);
    }
}



void display(int *a) {
    printf("%d",*a);
}