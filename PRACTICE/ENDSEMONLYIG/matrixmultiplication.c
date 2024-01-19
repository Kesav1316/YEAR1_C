#include <stdio.h>

int main() {
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int r1 , r2 , c1 , c2;
    r1 = 2;
    r2 = 2;
    c1 = 2;
    c2 = 2;
    for (int i = 0 ; i < r1 ; i++) {
        for (int j = 0 ; j < c1 ; j++) {
            printf("Enter a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0 ; i < r2 ; i++ ) {
        for (int j = 0 ; j < c2 ; j++) {
            printf("Enter b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(int i = 0 ; i < r1 ; i++) {
        for (int j = 0 ; j < c2 ; j++) {
            c[i][j] = 0;
            for (int k = 0 ; k < c1 ; k++) {
                c[i][j] = c[i][j] + a[i][k]*b[k][j];

            }
        }
    }
    for (int i = 0 ; i < r1 ; i++) {
        for (int j = 0 ; j < c2 ; j++ ) {
            printf("Matrix is [%d][%d] %d",i,j,c[i][j]);
        }
    }
}