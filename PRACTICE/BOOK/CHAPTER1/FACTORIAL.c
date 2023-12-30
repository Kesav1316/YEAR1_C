#include <stdio.h>

int main() {
    int a;
    int factorial = 1;
    printf("Enter the factorial number");
    scanf("%d",&a);
    for ( int i = 1 ; i <= a ; i++ ) {
        factorial *=i;
    }
    printf("%d",factorial);
}