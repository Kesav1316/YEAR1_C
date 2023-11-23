#include <stdio.h>

int sum(int a);

int main(){
    int y , result ;
    printf("Enter a number:");
    scanf("%d",&y);
    result = sum(y);
    printf("%d",result);
    return 0;
}


int sum(int a){ 
    if ( a > 0 ){
        return a + sum(a-1);
    }

    else{
        return 0;
    }
}