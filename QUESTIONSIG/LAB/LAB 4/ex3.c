/******************************************************************************

Experiment 3 : YOU KNOW WHO 

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdbool.h>

void remove_first(char *str_pt, char x){
    /* CASE SENSITIVE
    Input : "YOU ONLY LIVE ONCE", 'O'
    Output: "YU ONLY LIVE ONCE"
    */
    // 2) Your CODE goes here
    
    
    
    // Within this 
}


bool aparecium(char *str_pt_1, char *str_pt_2){
    char i;
    bool flag = true;
    /* CASE SENSITIVE
    Input : Two string pointers
    Output: change flag = flase when two strings doesnot come from same set of characters
    */
    // 3) Your CODE goes here
    while (i!= "\0") {
        if (*str_pt_1 != *str_pt_2) {
            flag = false;
            
        }
        i++;
    }
    
    
    
    // Within this 
    return flag;
}

int main() 
{ 
    char str_input1[50], str_input2[50];
    char *str_ptr_1;
    char *str_ptr_2;
    
    // 1) Get input from user and store it in str_input and store its address in str_ptr  
    // YOUR CODE GOES HERE 
    
    
    
    // TILL HERE
    if(aparecium(str_ptr_1,str_ptr_2))
        printf("\n...Mischief Managed...\n");
    else
        printf("\n...Obliviate...\n");
    return 0; 
}
