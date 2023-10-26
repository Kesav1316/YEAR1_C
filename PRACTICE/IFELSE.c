#include <stdio.h>
int main() {
    int a;
    printf("Select a number: ");
    scanf("%d",&a);
    if (a<10) {
        printf("%d is lesser than 10",a);
    }

    else if (a>10) {
        printf("%d is greater than 10",a);
    }

    else {
        printf("%d is invalid",a);
    }
    return 0;
}