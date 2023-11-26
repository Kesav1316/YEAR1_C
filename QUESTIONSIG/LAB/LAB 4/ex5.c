/******************************************************************************

Experiment 5 : Introduction to structures

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

struct Personal
{
  int age;
  char *name;
  char *native;
  int roll_no[10];
};

void
print_struct (struct Personal *mydat)
{
  printf ("\n-----------------------------------------\n");
  printf ("              My Details ");
  printf ("\n-----------------------------------------\n");
  // 2) YOUR CODE GOES HERE 



  // TILL HERE
  printf ("\n-----------------------------------------\n");
}


int
main ()
{

  struct Personal mydata;
  struct Personal *mydata_ptr;
  // 1) Get input from user and store it in structure and store its address in a pointer 
  // YOUR CODE GOES HERE 



  // TILL HERE
  print_struct (mydata_ptr);
  return 0;
}
