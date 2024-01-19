#include <stdio.h>
struct book {
    char name;
    int price;
};

int main() {
    struct book b1;
    struct book b1 = {"spfmig",10000};
    printf("%s %d",b1.name , b1.price);
}