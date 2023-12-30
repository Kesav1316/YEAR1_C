#include <stdio.h>
//REVERSE A 4 DIGIT NUMBER
int main() {
    int a,a5,a4,a3,a2,b;
    printf("Enter a 4 digit number:");
    scanf("%d",&a);
    a4 = a%10;
    a = (a-a4)/10;
    a3 = a%10;
    a = (a-a3)/10;
    a2 = a%10;
    a = (a-a2)/10;
    b = a4*1000 + a3*100 + a2*10 + a;
    printf("The reversed number is %d",b);
    
}