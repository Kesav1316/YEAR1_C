#include <stdio.h>

int main() {
    int salary , DAll , HRent , total;
    printf("Enter your salary:");
    scanf("%d",&salary);
    DAll =  0.4 * salary;
    HRent = 0.2 * salary;
    total = salary + DAll - HRent;
    printf("Total salary is %d",total);
}