#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a,b");
    scanf("%d%d",&a,&b); //& To allocate memory
    c = a+b;
    printf("The sum is %d",c);
    return 0;
}