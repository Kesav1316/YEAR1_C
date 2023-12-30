#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i,j,len,n;
    printf("Enter a string");
    scanf("%s",&s);
    printf("Enter a number");
    scanf("%d",&n);
    len = strlen(s);
    if (n>len) {
        for ( int i = 0 ; i < len ; i++ ) {
            printf("%c",s[i]);
        }
    }
    else if (n<len) {
        for (i=n;i<len;i++) {
            printf("%c",s[i]);
        }
        for (j=0;j<n;j++) {
            printf("%c",s[j]);
        }
    }

}