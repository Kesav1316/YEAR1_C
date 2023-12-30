#include <stdio.h>
void sortig(int *, int);
int main() {
    int i;
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(a)/4;
    sortig(a,len);
    for (i=0;i<len;i++) {
        printf("%d",a[i]);
    }
}

void sortig(int *a,int len) {
    int i,j,temp;
    for (i=0;i<len-1;i++) {
        for (j = 0 ; j<len-1;j++) {
            if (a[j] < a[j+1]) {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
            
            }
        }
    }


