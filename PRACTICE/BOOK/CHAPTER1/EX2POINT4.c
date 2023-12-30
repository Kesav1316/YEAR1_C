#include <stdio.h>

int main() {
    float m1,m2,m3,m4,m5,percentage;
    printf("Enter the marks:");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    percentage = (m1+m2+m3+m4+m5)/5;
    if (percentage>=60) {
        printf("First division");
    }
    else if ((percentage>=50)) { //IF IS UNDER ELSE OF FIRST IF
        printf("Second division");
    }
    else if ((percentage>=40)) {  
        printf("Third division");
    }


    
    else {
        printf("Fail");
    }
}