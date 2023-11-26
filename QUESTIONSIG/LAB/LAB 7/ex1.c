/******************************************************************************

            Experiment - 1 Recursion

*******************************************************************************/
#include <stdio.h>

int
sum_n_cubes (int n)
{
// Your CODE goes HERE

// Till HERE
}

int
main ()
{
  int num;
  printf ("Enter n - ");
  scanf ("%d", &num);
  int rec_result = sum_n_cubes (num);
  // Update the formula here
  int formula_result;

  printf ("\nSum of cubes till %d is %d (recursion)", num, rec_result);
  printf ("\nSum of cubes till %d is %d (formula)", num, formula_result);
  return 0;
}
