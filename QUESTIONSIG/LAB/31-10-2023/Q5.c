//FIND THE ROOTS
#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    float D,D1,r1,r2;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:"); 
    scanf("%f",&b);
    printf("Enter c:");

    scanf("%f",&c);
    D = (b*b) - 4 * a * c;
    if ( D >=0 ) {
        //D = (b*b) - (4 * a * c);
        r1 = (-b + pow(D,0.5))/(2 * a);
        r2 = (-b - pow(D,0.5))/(2 * a);
        printf("ROOT 1 IS:%f\n",r1);
        printf("ROOT 2 IS:%f\n",r2);

    }

    else {
        D = -D;
        D1 = pow(D,0.5);
        printf("ROOT 1 IS:%f + %fi\n", ((-b) / (2 * a)) , (D1 / (2*a)));
        printf("ROOT 2 IS:%f - %fi\n",((-b) / (2 * a)) , (D1 / (2 * a)));
    }

}