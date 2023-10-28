#include <stdio.h>
void method1(int*, int);

int main() {
    int n[] = {10,15,20,25,30,35,40};
    method1(&n[0], 7);
    return 0;

}

void method1(int *y, int cnt) {
    for (int i=0;i<cnt;i++) {
        printf("%d\n", *y);
        y++;
    }
}