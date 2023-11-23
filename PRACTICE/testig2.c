#include <stdio.h>

struct stud {
    int rno,m1,m2,m3,m4;
    char name[100];
};


int main(){
    struct stud s;
    printf("Enter name,rno,m1,m2,m3,m4");
    scanf("%s%d%d%d%d%d",s.name,&s.m1,&s.m2,&s.m3,&s.m4);

}