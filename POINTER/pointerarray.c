#include <stdio.h>


int main(){
    int x[4] = {1,2,3,4}, *ptr;
    ptr = x; //If & is not used , address of  first element in array is used
    //printf("%d\n",ptr);
    //printf("%d\n",*ptr);

    for (int i = 0 ; i < (sizeof(x)/4) ; i ++ ) { // /4 because of int
        int *temp;
        temp = &x[i];
        printf("%d\n",temp);
        printf("%d\n",*temp);
    }
    return 0;



}