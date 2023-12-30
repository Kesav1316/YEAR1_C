#include <stdio.h>

int main() {
    int calcsum(int , int , int);
    int a,b,c,sum;
    printf("Enter a , b , c");
    scanf("%d %d %d",&a,&b,&c);
    sum = calcsum(a,b,c); //CALL BY VALUE 
    printf("%d",sum);
    

}

int calcsum(int a , int b , int c) {
    return a + b + c;

}