#include <stdio.h>
int main() {
    int d;
    int i = 1;
    int fact = 1;
    printf("Enter: ");
    scanf("%d",&d);
    while (i<d+1) {
        fact = fact * i;
        i++;
    }
    printf("%d",fact);
    return 0;
}