/******************************************************************************

Experiment - 2 Recursion

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float evaluate_polynomial (float *a, float x, int n)  {
// Your CODE goes HERE
int out;
if (n != 0) {
  out = a[n-1] * pow(x, n-1) + evaluate_polynomial(a, x, n-1);
} 
else return 0;
return out;
// Till HERE
}

int
main ()
{
int x;
float *t;
// The below polynomial is 3x^2 + 4x + 5
float arr[3] = { 5, 4, 3 };
t = &arr[0];

// Notice here a way to find the size of the array
int sz = sizeof (arr) / sizeof (float);

printf ("Enter value of x - ");
scanf ("%d", &x);
int rec_result = evaluate_polynomial (t, x, sz);
// Update the formula here
int formula_result;

printf ("\nSum of cubes till %d is %d (recursion)", x, rec_result);
printf ("\nSum of cubes till %d is %d (formula)", x, formula_result);
return 0;
}