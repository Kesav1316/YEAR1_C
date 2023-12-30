#include <stdio.h>
int facto(int);
int main() {
    int a,fact;
    printf("Enter factorial");
    scanf("%d",&a);
    fact = facto(a);
    printf("%d",fact);
}
int facto(int a) {
    int fact;
    if (a==1) {
        return 1;
    }
    else {
        fact = a * facto(a-1);
    }
    return fact;
}