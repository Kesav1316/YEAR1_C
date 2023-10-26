#include <stdio.h>
int main() {
    int d;
    int i = 1;
    int fact = 1;
    printf("Enter: ");
    scanf("%d",&d);
    do {
        fact = fact * i;
        i++;

    }
    while (i<d+1);
    printf("%d",fact);
    return 0;


}