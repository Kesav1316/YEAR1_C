#include <stdio.h>

int main() {
    int a , b , i , j;
    printf("Enter number of times and enter the pattern");
    scanf("%d %c",&a,&b);
    for (i = a ; i > 0 ; i--) {
        for (j = i ; j > 0 ; j--) {
            printf("%c ",b);
        }
        printf("\n");
        
    }
}