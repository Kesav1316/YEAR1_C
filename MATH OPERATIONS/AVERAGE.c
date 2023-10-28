#include<stdio.h>
int main()
{
int m1 , m2 , m3 , m4 , m5 ,total;
float avg;
printf("\nEnter the marks: ");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total = m1+m2+m3+m4+m5;
avg = (m1+m2+m3+m4+m5)/5;
printf("\nYour total is: %d",total);
printf("\n Your average is: %f",avg);
return 0;
}
