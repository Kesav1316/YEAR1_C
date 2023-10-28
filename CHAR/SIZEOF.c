#include <stdio.h>
int main()
{
int a = 6;
float b = 10.5;
char c = 'a';

printf("%lu\n" , sizeof(int));
printf("%lu\n" , sizeof(a));
printf("%lu\n" , sizeof(float));
printf("%lu\n" , sizeof(b));
printf("%lu\n" , sizeof(char));
printf("%lu\n" , sizeof(c));

return 0;
}
