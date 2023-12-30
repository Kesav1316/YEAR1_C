#include <stdio.h>
void display( int * , int );
int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    display(&a[0],10);
}

void display(int *a,int b){
    int i;
    for (i = 0 ; i < b ; i ++) {
        printf("%d",*a);
        a = a + 1;
    }
}