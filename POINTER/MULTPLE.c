//TO GET AN ARRAY OF NUMBERS IN THE MAIN PROGRAM AND PASS TO A FUNCTION AND CALCULATE THE MULTIPLE OF 5 IN THE ARRAY OF NUMBER


#include <stdio.h>

void calculateMultiplesOf5(int *arr, int size) {
    printf("Multiples of 5: ");
    for(int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * 5;

    }
    printf("\n");
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]); //SIZE OF GIVES NO OF BYTES SIZE   = TOTAL BYTES / BYTES OF FIRST ELEMENT

    calculateMultiplesOf5(arr, size);
    for(int i = 0; i < size; i++) {
        printf("%d",*(arr + i));
        printf("\n");
    }


    return 0;
}