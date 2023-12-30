#include <stdio.h>

int main() {
    int marks[10],average;
    int sum = 0;
    for (int i = 0 ; i < 10 ; i ++ ) {
        printf("Enter marks");
        scanf("%d",&marks[i]);
    }

    for (int j = 0 ; j < 10 ; j ++ ) {
        sum = sum + marks[j];
    }

    average = sum/10;
    printf("average %d",average);

}