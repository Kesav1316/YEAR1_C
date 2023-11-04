#include <stdio.h>



struct emp {
    char name[25];
    int id;

};


struct empad {
    char city[25];
    char ph[11];
    struct emp e;
}a;
int main() {
    scanf("%s %d %s %s",&a.e.name,&a.e.id);
    printf("%s%d%d")



}

//HOW TO USE FLUSH FUNCTION INSIDE THE PROGRAM