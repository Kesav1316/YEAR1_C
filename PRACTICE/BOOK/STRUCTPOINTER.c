/* #include <stdio.h>

int main() {
    struct book {
        int price;
        struct detail {
            char name[10];
        }a;
    };
    struct book b1;
    struct book *ptr;
    ptr = &b1;

    printf("Enter price and name");
    scanf("%d %s",&b1.price,&b1.a.name);


    printf("%d %s",ptr->price,ptr->a.name);
} */


#include <stdio.h>

int main() {
    struct book {
        char name[10];
        int pages;
    };
    struct book b1;
    struct book *ptr;
    ptr = &b1;
    scanf("%d %d",&(ptr ->name),&(ptr ->pages));
    printf("%s %d",ptr -> name , ptr -> pages);
}