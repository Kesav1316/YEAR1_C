#include <stdio.h>
#include <math.h>

int main() {
    int A,B;
    double LEFT , RIGHT;
    printf("Enter A and B");
    scanf("%d %d",&A,&B);
    LEFT = cos(A+B);
    RIGHT = cos(A) * cos(B) - sin(A) * sin(B);
    printf("%lf",LEFT);
    printf("%lf",RIGHT);

}