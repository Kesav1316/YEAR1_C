
#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    if (a>0) {
        printf("The number is positive\n  ");
        if ( a%2 == 0 ) {
            printf("EVEN");
        }
        else {
            printf("ODD");
        }
    }

    else if (a<0) {
        a = -a;
        printf("THE ROOT IS %fi\n",pow(a,0.5));
    }

    else {
        printf("ZERO");
    }


    return 0;
}