#include <stdio.h>
void dsp(char *);
int main() {
    char s[] = "spfmig";
    dsp(s);
}
void dsp(char *ptr){
    printf("%c",ptr[0]);
}