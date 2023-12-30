#include <stdio.h>

int main() {
    int n,i,j,a;
    printf("Enter number of rows");
    scanf("%d",&n);

    for ( i = 1 ; i <= n ; i++ ) {
        for ( j = n ; j >= i ; j-- ) {
            printf(" ");
        }
        for ( a = 1 ; a <= i ; a++ ) {
            printf("* ");
    }
    printf("\n");
}


    for (i = 1 ; i < n ; i++ ) {
        for ( j = 1 ; j <=i ; j++ ){
            printf(" ");
        }
        for ( a = n ; a > i ; a-- ) {
            printf(" *");
        }
        printf("\n");
    }





}