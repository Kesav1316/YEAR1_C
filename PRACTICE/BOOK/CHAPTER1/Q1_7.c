#include <stdio.h>
//CALCULATING SUM OF DIGITS OF A 5 DIGIT NUMBER
int main() {
    int a,a5,a4,a3,a2,b;
    printf("Enter a 5 digit number:");
    scanf("%d",&a);
    a5 = a%10;
    a = (a-a5)/10;
    a4 = a%10;
    a = (a-a4)/10;
    a3 = a%10;
    a = (a-a3)/10;
    a2 = a%10;
    a = (a-a2)/10;
    b = a5 + a4 + a3 + a2 + a;
    printf("The sum of digits:%d",b);
    
}