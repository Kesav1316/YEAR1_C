#include <stdio.h>
void dsp(int *);
int main() {
    int a[] = {1,2,3,4};
    dsp(a);
}
void dsp(int *ptr){
    printf("%d",ptr[0]);
}