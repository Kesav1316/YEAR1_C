#include <stdio.h>

void disp(int,char,float);
struct student {
    int rno;
    char name;
    float avg;
    };
int main() {
    struct student b1,b2,b3
    scanf("%d%c%f",&b1.rno,&b1.name,&b1.avg);
    disp(b1.rno,b1.name,b1.avg);
    return 0;
}