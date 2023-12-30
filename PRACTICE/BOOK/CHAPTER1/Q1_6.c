#include <stdio.h>

int main() {
    int C , D;
    printf("Enter C and D");
    scanf("%d %d",&C,&D);
    C = C + D;
    D = C - D;
    C = C - D;
    printf("C is %d , D is %d",C,D);
}