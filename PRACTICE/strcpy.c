#include <stdio.h>
#include <string.h>


int main() {
    char str[100] = "hi";
    char str1[100];
    strcpy(str1,str);
    printf("%s",str1);


    return 0;
    
}