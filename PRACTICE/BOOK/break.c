#include <stdio.h>

int main() {
    int a,i;
    printf("Enter a number");
    scanf("%d",&a);
    for (i=2 ; i < a ; i++) {
        if(a%i == 0) {
        printf("NOTPRIMEIG");
        break; //TO PREVENT MULTIPLE PRINT
        }
    }

}