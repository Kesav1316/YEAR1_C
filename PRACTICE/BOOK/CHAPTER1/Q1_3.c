#include <stdio.h>

int main() {
    float m1,m2,m3,m4,m5,am,pm;
    printf("Enter marks in all subjects:");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    am = m1 + m2 + m3 + m4 + m5;
    pm = am/5;
    printf("Aggregate marks is %f",am);
    printf("Percentage marks is %f",pm);



    return 0;

}