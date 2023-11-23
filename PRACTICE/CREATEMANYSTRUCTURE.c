#include <stdio.h>
struct book {
    int a;
    char s[10];
};
int main() {

    struct book b[10];

    for (int i = 0 ; i < 10 ; i ++ ) {
        printf("Enter a:");
        scanf("%d",&b[i].a);
        printf("Enter s:");
        scanf("%s",b[i].s);
    }

    for (int j = 0 ; j < 10 ; j ++ ) {
        printf("%d",b[j].a);
        printf("%s",b[j].s);
    }

    
}