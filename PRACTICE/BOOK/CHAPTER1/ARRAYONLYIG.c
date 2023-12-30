#include <stdio.h>

int main() {
    int s[10][20] = {10,100,10,100};
    printf("%d %d",*(s+1),*s[1]);
}