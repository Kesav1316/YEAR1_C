#include <stdio.h>

int main() {
    struct book {
        char name[25];
        char author[25];
        int callno;
    };

    struct book b1 = { "LET US C" , "YPK" , 101 };
    struct book *ptr;
    ptr = &b1;
    printf("%s %s %d",ptr -> name , ptr -> author , ptr -> callno);
}