#include<stdio.h>

// Include your Header file here 

int
main ()
{
  complex u, v, z;
// Accept two complex numbers 
// YOUR CODE GOES HERE



// TILL HERE
  printf ("Complex 1 - ");
  print (u);
  printf ("\n");
  printf ("Complex 2 - ");
  print (v);
  printf ("\n");
  z = add (&u, &v);
  printf ("Addition - ");
  print (z);
  printf ("\n");
  z = subtract (&u, &v);
  printf ("Subtraction - ");
  print (z);
  printf ("\n");
  z = multiply (&u, &v);
  printf ("Multiplication - ");
  print (z);
  printf ("\n");
  return 0;
}