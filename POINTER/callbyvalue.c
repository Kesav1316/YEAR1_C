//CHANGES ARE DONE LOCAL FUNCTION AND WONT CHANGE IN MAIN
#include <stdio.h>


int main(){
    int x,y;
    void swap( int , int );
    x = 100;
    y = 100000000;
    printf("%d%d",x,y);
    swap(x,y);
}


void swap( int a , int b ){
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d%d",a,b);

}