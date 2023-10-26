#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    switch(n) {
    case 1: {
        printf("N is 1");
        break;
    }

    default: {
        printf("N is not 1");
        break;
    }
    }

}