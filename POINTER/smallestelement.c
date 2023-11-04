/* #include <stdio.h>

void small(int * , int);

int main() {
    int n[] = {1,2,3};
    small(n,3);
    return 0;

}

void small(int *p , int a) {
    int s = &p;
    for (int i = 0 ; i < a ; i++ ) {
        if ( *(p + i) < *s) {
            *s = *(p+i);
        }


    }
} */

#include <stdio.h>

int findSmallest(int *arr, int size) {
    int smallest = *arr; // Assume the first element is the smallest

    for(int i = 1; i < size; i++) {
        if (*(arr + i) < smallest) {
            smallest = *(arr + i);
        }
    }

    return smallest;
}

int main() {
    int arr[] = {5, 3, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = findSmallest(arr, size);

    printf("The smallest number is: %d\n", smallest);
    return 0;
}