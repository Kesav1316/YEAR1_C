#include <stdio.h>

    struct Employee {
        int id;
        char name[25];
        struct Personal {
            struct DOB {
                int month , year , date;
            }dt;
            char gender;
        }personal_dat;
        struct Professional {
            char city[5];
            int experience;
        }professional_dat;
    };
typedef struct Employee EMP;
void print_function(EMP *);
int main() {
    EMP b1;
    print_function(&b1);
    }


void print_function(EMP *b1) {
    printf("%d",b1->id);
    printf("%c",b1->name);
    printf("%d",b1->personal_dat.dt.month);
    printf("%d",b1->personal_dat.dt.year);
    printf("%d",b1->personal_dat.dt.date);
    printf("%c",b1->personal_dat.gender);
    printf("%s",b1->professional_dat.city);
    printf("%d",b1->professional_dat.experience);
}