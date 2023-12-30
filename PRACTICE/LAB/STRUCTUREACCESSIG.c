#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    struct details {
        int ph;
        struct pdetails {
            char name[100];
        }pdtt;
    }dt;
};
//void print_function(struct *);
int main() {
    struct Employee b1;
    b1.id = 1;
    b1.dt.ph = 1;
    strcpy(b1.dt.pdtt.name,"hello");
    print_function(&b1);
}
//typedef struct Employee EMP;

void print_function (struct Employee *ptr) {
    printf("%d %d %c",ptr -> id , ptr -> dt.ph , ptr ->dt.pdtt.name);
}
