#include <stdio.h>

int main() {
    int a;
    for (int i = 0 ; i < 10 ; i ++) {
        printf("Enter total working hours");
        scanf("%d",&a);
        if (a>40) {
            printf("Overtime pay is %d",(a-40) * 12);
        }
    }
}