#include <stdio.h>
int main()
{
int a,b;
printf("\n Enter a and b: ");
scanf("%d%d",&a,&b);
a = a + b;
b = a - b;
a = a - b;
printf("\n The swapped values are %d,%d",a,b);
return 0;
}
