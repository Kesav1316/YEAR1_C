#include <stdio.h>
int sum(int);
int main() {
    int spfmig;
    spfmig = sum(5);
    printf("%d",spfmig);
}

int sum(int a) {
    int spfmig;
    spfmig = 0;
    if (a == 1) {
        return 1;
    }
    else {
        spfmig = a + sum(a-1);
        return spfmig;
    }
}