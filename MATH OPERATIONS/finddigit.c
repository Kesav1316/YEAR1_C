#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,number,reverse;
	printf("Enter a number: ");
	scanf("%d",&a);
	b = a/1000; //Shows 1000th digit
	c = a%1000; //Shows all numbers except 1000th digit
	d = c/100; //Shows 100th digit
	e = c%100; // Shows all numbers except 100th digit
	f = e/10; //Shows 10s digit
	g = e%10; // Shows ones digit

	printf("The number is : %d\n",a);
	printf("The 1000th digit is : %d\n",b);
	printf("The 100th digit is : %d\n",d);
	printf("The 10s digit is : %d\n",f);
	printf("The 1s digit is : %d\n",g);
	
	//Reversing a number 
	
	number = b*1000 + d*100 + f*10 + g;
	reverse = b + d*10 + f*100 + g*1000;
	printf("Original number is : %d\n",number);
	printf("Number in reversed is : %d\n" , reverse);
	
	
	
	
	return 0;
}
