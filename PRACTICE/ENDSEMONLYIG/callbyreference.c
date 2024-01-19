#include <stdio.h>
void sum1(int , int , int *);
void sum1(int a , int b , int *sum) {
    *sum = a+b;
}
int main() {
    int a = 10 , b = 100 ,sum;
    sum1(a,b,&sum);
    printf("%d",sum);
}