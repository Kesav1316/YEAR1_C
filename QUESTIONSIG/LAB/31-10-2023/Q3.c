//FIND THE DISCRIMINANT OF THE GIVEN EQUATION
#include <stdio.h>

int main() {
    float a,b,c,m;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);
    m = (b*b)-4*a*c;
    printf("DISCRIMINANT IS b^2-4ac: %f\n",m);
    return 0;
}