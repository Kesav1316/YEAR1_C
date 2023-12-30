/******************************************************************************

Experiment 1 : Understanding in-built function in <string> and <ctype>

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void start_case(char *str_pt){
    /*
    Input : "ALL IS WELL"
    Output: "All Is Well"
    */
    // Your CODE goes here
    
    
    
    // Within this 
}


void crazy_case(char *str_pt){
    /*
    Input : "ALL IS WELL"
    Output: "aLL iS wELL"
    */
    // Your CODE goes here
    
    
    
    // Within this 
}

int main() 
{ 

    char str_test[] = "Foundations are important"; 
    char str2[30] = "It helps"; 
    char str_copy[10];
    char str_input[50];
    char *str_ptr;
    
    // 1) Get input from user and store it in str_input and store its address in str_ptr  
    // YOUR CODE GOES HERE 
    
    // TILL HERE
    printf("Enter string");
    scanf("%s",str_input);
    str_ptr = &str_input;
    printf("%s %s",str_input , str_ptr);

    // 2) Test and Learn how the following works
    // Computes the length of the string :: strlen()
    printf("String 1 length: %ld\n", strlen(str_test));
    // Notice the change in size
    printf("String 1 size: %ld\n", sizeof(str_test)); 
    
    printf("String 2 length: %ld\n", strlen(str2));
    // Notice the change in size
    printf("String 2 size: %ld\n", sizeof(str2)); 
    
    // strcpy(destination,source) function copies the string in 
    //source to destination
    strcpy(str_copy,str2);
    printf("str_copy :  %s\n",str_copy);
    
    
    // 4) strcmp(string 1,string 2) - compares the two strings 
    // NOTE it returns an integer
    // Search and find how strcmp works
    
    // YOUR CODE GOES HERE 
    
    // TILL HERE
    
    // There are two ways to convert an uppercase character 
    // to lower case and vice versa.
    // 1) using how "char" is defined
    // 2) using a function in ctype https://www.programiz.com/c-programming/library-function/ctype.h
    
    // YOUR CODE GOES HERE 
    
    // TILL HERE
    
    printf("Input       : %s\n",str_input);
    start_case(str_ptr);
    printf("Strat Case  :%s\n",str_input);
    crazy_case(str_ptr);
    printf("Crazy Case  :%s\n",str_input);
    return 0; 
}
