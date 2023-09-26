#include <stdio.h>

int main() {
    char ch[7];
    int i=0;
    for ( i = 0 ; i < 7 ; i++) {
        printf("\nEnter: ");
        ch[i] = getchar();
        //scanf("%s",&ch[i]);
    }
    return 0;
}