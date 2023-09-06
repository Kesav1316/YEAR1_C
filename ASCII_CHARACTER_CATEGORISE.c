#include <stdio.h>

int main() {
char ch;
printf("Enter character: ");
scanf("%c",&ch); //Input as character
// a = printf("%d",ch);
int a = ch; //Converting the character into int converts into ASCII

if (a>=65 && a<=90)
printf("\nIt belongs to A-Z\n");

else if (a>=97 && a<= 122)
printf("\nIt belongs to a-z\n");

else if (a>=48 && a<=57)
printf("\nIt belongs to 0-9\n");

else
printf("\nIt belongs to Special Symbols\n");

return 0;
}