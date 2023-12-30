#include <stdio.h>
#include <stdlib.h>
int main(){
    char String[100];
    gets(String);
    int i =0,W=0;
    while(String[i] != '\0'){
        if(String[i] == '/'){
            W++;
            printf("\n");
            for(int j = 0;j<W;j++){
                printf("*");
            }
        }else{
            printf("%c",String[i]);
        }
    i++;
}
}