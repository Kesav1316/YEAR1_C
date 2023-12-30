#include <stdio.h>

int main() {
    char s[100] = "hello";
    int i,j,len,n;
    len = sizeof(s)/4;
    n=2;
    for(i=n;i<len;i++) {
        printf("%c",s[i]);
    }
    for (j=0;j<n;j++) {
        printf("%c",s[j]);
    }
}