#include <stdio.h>


int main() {
    struct sry {
        char name[100];
        int rno;
        int mark;;
        
    };
    struct sry a[10];

    for ( int i = 0 ; i < 10 ; i ++ ) {
            scanf("%s%d%d",a[i].name,&a[i].rno,&a[i].mark);
    }
}