//CHECK WHETHER THE COORDINATES ARE WITHIN THE BOX
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter x coordinate:");
    scanf("%d",&a);
    printf("Enter y coordinates:");
    scanf("%d",&b);

    if ((0<=a && a<=4) && (0<=b && b<=4)) {
        printf("The coordinates is within the box");
    }

    else {
        printf("The coordinates is not within the box");
    }
}