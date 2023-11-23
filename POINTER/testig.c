#include <stdio.h>


int main(){
    int *a,x;
    x = 5;
    a = &x;
    printf("The value of x is:%d\n",x);
    printf("The memory address of x is:%d\n",&x);
    printf("The value of pointer a using d is:%d\n",a);
    printf("The value of pointer a using p is:%p\n",a);
    printf("The value of x using pointer is:%d\n",*a);
}