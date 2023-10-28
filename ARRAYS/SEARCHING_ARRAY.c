#include <stdio.h>
int main () {
    int a[]= {1,2,3,4,5,6}, n;

    printf("Enter the number to search: ");

    scanf("%d", &n);

    for (int i = 0; i < 6; i++){

        if (n == a[i]){
            printf("\nFound at index %d", i);
            return 0;
        }
    }

    printf("\nNumber not found");
    
}