#include <stdio.h>

int main(){
    int x , *a;
    x = 5;
    a = &x;

    void spfmig(int*);

    spfmig(&x);
    
}

void spfmig(int *p) {
    int b = *p;
    printf("%d%d",b,p);
};