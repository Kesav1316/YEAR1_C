#include <stdio.h>


int main() {
    int N;
    printf("Enter a no:");
    scanf("%d",&N);
    printf("%d\t",N);
    while(N>=1) {

        if(N%2==0) {
            goto even;
        }
        else if(N%2!=0){
            goto odd;
        }
        even:
            N = N/2;
            printf("%d\t",N);
            if ( N == 1)
            break;
            continue;
        odd:
            N = 3*N + 1;
            printf("%d\t",N);
            if ( N == 1)
            break;
            continue;
        if ( N == 1 ) 
        break;


    }
    return 0;
}