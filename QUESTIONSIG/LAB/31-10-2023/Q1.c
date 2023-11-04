//WRITE A PROGRAM TO CALCULATE BMI 
#include <stdio.h>

int main() {
    float h,w,bmi;
    printf("Enter height(inm): ");
    scanf("%f",&h);
    printf("Enter weight(inkg): ");
    scanf("%f",&w);
    bmi = w/(h*h);
    printf("BMI is %f\n",bmi);
    return 0;
}