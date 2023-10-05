#include <stdio.h>
int main() {
    int x=1,y=2,z;
    z=add(x,y); //fn. call
    printf("%d",z);
    return 0;
}

int add(int a,int b) {//fn. defn
    return (a+b);
}


