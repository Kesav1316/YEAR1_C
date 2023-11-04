//WRITE A PROGRAM TO CONVERT KILOMETERS TO MILES
#include <stdio.h>

int main() {
    float km,m;
    printf("Enter km: ");
    scanf("%f",&km);
    m = km * 0.621;
    printf("%f\n",m);
    return 0;
}

//gcc <name> -o name