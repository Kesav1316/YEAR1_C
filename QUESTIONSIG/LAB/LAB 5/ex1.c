/*******************************************************************************

                        Experiment 1 - Structures 

*******************************************************************************/
#include <stdio.h>

// Structure to store the data
struct Complex
{
  float real, imag;
};

typedef struct Complex complex;          

void
print (complex a)
{
// Print the complex number in " a + ib " format
// YOUR CODE GOES HERE
printf("The 1st complex number is:%f + %fi",a.real,a.imag);

// TILL HERE
}

complex
add (complex * u, complex * v)
{
  complex z;
// Compute the sum of complex numbers
// YOUR CODE GOES HERE
z.real = u->real + v->real; // -> FOR MEMBERSHIP OPERATOR u->real = *u.real
z.imag = u->imag + v->imag;



// TILL HERE
  return z;
}

complex
subtract (complex * u, complex * v)
{
  complex z;
// Compute the subtraction of complex numbers
// YOUR CODE GOES HERE
z.real = u->real - v->real;
z.imag = u->imag - v->imag;



// TILL HERE
  return z;
}

complex
multiply (complex * u, complex * v)
{
  complex z;
// Compute the multiplicaiton of complex numbers
// YOUR CODE GOES HERE
z.real = (u->real * v->real) - (u->imag * v->imag);
z.imag = (u->imag * v->real) - (v->imag * u->real);



// TILL HERE
  return z;
}

int
main ()
{
  complex u, v, z;




// Accept two complex numbers 
// YOUR CODE GOES HERE

  printf("Enter real part of first number:");
  scanf("%f",&u.real);
  printf("Enter complex part of first number:");
  scanf("%f",&u.imag);
  printf("Enter real part of first number:");
  scanf("%f",&v.real);
  printf("Enter complex part of first number:");
  scanf("%f",&v.imag);



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
