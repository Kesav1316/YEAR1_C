#include <stdio.h>

int main() {
    struct book {
        char name[5];
        int price;
    };
    struct book b[5];
    for (int i = 0 ; i < 5 ; i ++ ) {
        printf("Enter name and price");
        scanf("%s %d",&b[i].name,&b[i].price);
    }

    for (int i = 0 ; i < 5 ; i ++ ) {
        printf("%s %d",b[i].name,b[i].price);
        
    }
}