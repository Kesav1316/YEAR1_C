#include <stdio.h>
void ap(int , float * , float *);
int main() {
    int r;
    float a,p;
    scanf("%d",&r);
    ap(r,&a,&p);
    printf("Area %d Perimeter %d",a,p);
}

void ap(int r , float *a , float *p) {
    *a = 3.14 * r * r;
    *p = 2 * 3.13 * r;
}