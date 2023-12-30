#include <stdio.h>
void swaponlyig(int * , int *);
int main() {
    int x,y;
    printf("Enter x y");
    scanf("%d %d",&x,&y);
    swaponlyig(&x,&y);
    printf("%d %d",x,y);
}
void swaponlyig(int *x,int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}