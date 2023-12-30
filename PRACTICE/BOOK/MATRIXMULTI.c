#include <stdio.h>
void multiply(int * , int * , int *);
int main() {
    int M[2][2];
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{1,2},{3,4}};
    multiply(a,b,M);
}
void multiply(int *a , int *b , int *M) {
    int i,j,k;
    for (i=0 ; i < 2 ; i++) {
        for (j=0 ; j<2 ; j++) {
            M[i][j] = 0;
            for (k=0;k<2;k++) {
                M[i][j] = M[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}