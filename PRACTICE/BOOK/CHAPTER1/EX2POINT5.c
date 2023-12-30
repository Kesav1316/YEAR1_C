#include <stdio.h>

int main() {
    char gender , ms;
    int age;
    printf("Enter gender , ms and age");
    scanf("%c %c %d",&gender , &ms , &age);
    if((ms == 'M') || (ms == 'U' && gender == 'M' && age > 30) || (ms == 'U' && gender == 'F' && age > 25)) {
        printf("Insured");
    }

    else {
        printf("Not insured");
    }
}

//REMARK - USE SINGLE QUOTE FOR CHARACTER