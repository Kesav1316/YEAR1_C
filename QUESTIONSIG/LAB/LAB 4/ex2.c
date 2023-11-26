/******************************************************************************

Experiment 2 : MODIFY STRINGS

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void remove_first(char *str_pt, char x){
    /* CASE SENSITIVE
    Input : "YOU ONLY LIVE ONCE", 'O'
    Output: "YU ONLY LIVE ONCE"
    */
    // 2) Your CODE goes here
    
    
    
    // Within this 
}


void remove_all(char *str_pt, char x){
    /* CASE SENSITIVE
    Input : "YOU ONLY LIVE ONCE", 'O'
    Output: "YU NLY LIVE NCE"
    */
    // 3) Your CODE goes here
    
    
    
    // Within this 
}

int main() 
{ 
    char str_input[50];
    char *str_ptr;
    char x;
    
    // 1) Get input from user and store it in str_input and store its address in str_ptr  
    //      x - has the character to be removed
    // YOUR CODE GOES HERE 
    
    
    
    // TILL HERE
    
    printf("Input       : %s\n",str_input);
    remove_first(str_ptr,x);
    printf("Output after removing first  :%s\n",str_input);
    remove_all(str_ptr, x);
    printf("Output after removing all  :%s\n",str_input);
    return 0; 
}
