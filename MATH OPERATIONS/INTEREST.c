#include <stdio.h>
int main()
{
float P , R , N , I;
printf("\n Enter the principle: ");
scanf("%f",&P);
printf("\n Enter the rate: ");
scanf("%f",&R);
printf("\n Enter the time: ");
scanf("%f",&N);
I = (P*R*N)/100;
printf("\n The simple interest is %f",I);
return 0;
}
