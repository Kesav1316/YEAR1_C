#include <stdio.h>
int main() {
    int d;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d",&d);
    for (int i=1;i<d+1;i++) {
        fact = fact * i;
    }
    printf("%d",fact);
}