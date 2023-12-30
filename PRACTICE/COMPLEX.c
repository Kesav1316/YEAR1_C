#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a>0) {
        if (a%2 ==0) {
            printf("It is even");
        }
        else if (a%2!=0) {
            printf("It is odd");
        }
    }

    if (a<0) {
        int b,power;
        b = -a;
        power = pow(b,0.5);
        printf("%di",power);
    }

    if (a==0) {
        printf("ZERO");
    }
}