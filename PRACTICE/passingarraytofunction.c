#include <stdio.h>


void display(int [] , int);

int main() {
    int n[] = {10,15,20,25,30,35,40};
    display(n,7);

    return 0;

}


void display(int a[], int b){

    for(int i = 0; i < b; i++){

        printf("%d\n", a[i]);
    }
}