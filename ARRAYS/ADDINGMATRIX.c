#include <stdio.h>
int main() {
    int a[3][3] , b[3][3] , c[3][3]; //Creating 2D arrays with 3 rows and 3 columns
    int i,j;
    //Creating A matrix
    for(i=0;i<3;i++)  //ROWS FROM 0 TO 2
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //Creating B matrix
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);

        }
        printf("\n");
    }

    //Creating sum matrix
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }

    //Displaying C
    printf("The sum of A + B = C\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

/*
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("The element in c[%d][%d] is %d\n",i,j,c[i][j]);
        }
    }

*/
    return 0;

}


