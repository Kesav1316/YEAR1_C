# include <stdio.h>



struct name {
    int *a;
    char s[];
};





//struct name

int main() {
    struct name b[5];
    int *h;
    int marks[5];
    h = &marks;

    for ( int i = 0 ; i < 2 ; i++ ) {
        for ( int j = 0 ; j < 5 ; j++ ) {
            scanf("%d",*(b[i].(h+j)));
        }
        scanf("Name: %s",b[i].s);
  }

    
    
    
}