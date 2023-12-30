#include <stdio.h>

int main() {
    int b,i,n;
    float sum , ma , st;
    sum = 0;
    float data[100] = {83.255, 83.256, 83.03, 82.702, 82.24, 82.096, 82.69, 81.745, 82.185, 82.645, 81.769, 82.745, 81.374, 82.78,
    81.522, 79.511, 79.351, 78.965, 77.598, 76.535, 75.928, 75.52, 74.556, 74.486};
    printf("SEASON LENGTH");
    scanf("%d",&b);
    printf("DATA LENGTH");
    scanf("%d",&n);
    
    for (i = 0 ; i < n ; i++) {
        sum = sum + data[i];
    }
    ma = sum / n;
    printf("%f",ma);

    for (i = 0 ; i < n ; i++) {
        st = ma - data[i];
        printf("%f\n",st);
    }


}