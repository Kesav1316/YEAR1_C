#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter a , b");
    scanf("%d%d",&a,&b);
    c = (a>b)?a:b;
    printf("The largest number is c:%d",c);
}