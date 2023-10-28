#include <stdio.h>


int main() {
    struct book{
        char name[100];
        int price;
        int page;
    };
    struct book b1;
    struct book b2;

    scanf("%s%d%d",b1.name,&b1.price,&b1.page);
    scanf("%s%d%d",b2.name,&b2.price,&b2.page);

    printf("%s\n%d\n%d",b1.name,b1.price,b1.page);
    printf("%s\n%d\n%d",b2.name,b2.price,b2.page);

    return 0;
}
