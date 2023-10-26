#include <stdio.h>
#include <string.h>

/*int main() {
    int i =0;
    do {
        printf("%d\n",i);
        i++;
    }
    while(i<100);

    return 0;
}*/

/*int main() {
    int num;
    int sum = 0;
    printf("enter");
    scanf("%d",&num);
    while (num!=0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("%d",sum);

    
    return 0;
}*/

/*int main() {
    int s;
    int a;
    int b;
    printf("1)+ 2)- 3)* 4)/");
    scanf("%d",&s);

    switch(s) {
        case 1:
        scanf("%d%d",&a,&b);
        printf("%d",a+b);
        break;

        default:
        printf("error");
        break;

    }

}*/

/*FIBONACCI SERIES
#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}*/

/*ARMSTRONG NUMBER
#include <stdio.h>
 
void main()
{
    int temp, digit1, digit2, digit3;
 
    printf("All Armstrong numbers between 1 and 1000 are:\n");
    for(int n=1;n<=1000;n++)  //suppose loop is at n = 371
    {
        if(n<=9)
        {
            printf("%d ",n);
        }
        else
        {
            digit1 = n % 10;   //digit1 = 371 % 10 = 1
            digit2 = (n % 100 - digit1) / 10;  //digit2 = (371%100 – 1) / 10 = 7        
            digit3 = (n % 1000 - digit2) /100; //digit3 = (371%1000 –7)/100 = 3
            temp = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3); 
	    //(1*1*1) + (7*7*7) + (3*3*3) = 371
	if (temp == n)
            {
                printf("%d ", temp);
            }
        }              
    }
}*/


int main () {
    char s[100];
    char rev[100];

    printf("Enter string:");
    gets(s);

    for(int i=strlen(s)-1;i>=0;--i){
        rev[strlen(s)-i] = s[i];
    }

    printf("%s",rev);

    return 0;

}
