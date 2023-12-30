#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 2; i <= a; i++) {
        int count = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                count = 0;
                break;
            }
        }

        if (count == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
