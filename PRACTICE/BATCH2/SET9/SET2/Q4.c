#include <stdio.h>
int sum( int A[] , int N ) {
    if ( N < 0 ) {
        return 0;
    }
    else {
        return A[N] + sum(A,N-1);
    }
}
int main() {
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",sum(A,9));

}