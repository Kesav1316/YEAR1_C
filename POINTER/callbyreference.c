//ADDRESS OF ARGUEMENT IS PASSED AND CHANGES ARE DONE BOTH IN FUNCTION AND MAIN
//CHANGES DONE TO VARIABLE IN FUNCTION ALSO CHANGES IN MAIN
#include <stdio.h>


int main(){
    int x,y;
    void change(int * , int *);
    x = 100;
    y = 100000000;
    printf("%d%d",x,y);
    change(&x,&y);
    printf("%d%d",x,y);
    return 0;
}


void change( int *a , int *b ) {
    int c;
    c = *a; // a is memory address
    *a = *b; // *a gives value in memory address
    *b = c;


    return;


}



//void change(int * , int *) - FUNCTION DECLARATION

//void change(int *a , int *b){ - FUNCTION DEFINITION
//}

//change(&x,&y) - FUNCTION CALL
