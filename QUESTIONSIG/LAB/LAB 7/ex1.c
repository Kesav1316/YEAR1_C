/******************************************************************************

            Experiment - 1 Recursion

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int sum_n_cubes (int n) {
// Your CODE goes HERE
  int sum = 0;
  if (n==0) {
    return 0;
  }

  sum+= (n*n*n) + sum_n_cubes(n-1);

return sum;
// Till HERE
}

int main () {
  int num;
  printf ("Enter n - ");
  scanf ("%d", &num);
  int rec_result = sum_n_cubes (num);
  // Update the formula here
  int formula_result;
  formula_result = pow((num*(num+1)/2),2);
  printf ("\nSum of cubes till %d is %d (recursion)", num, rec_result);
  printf ("\nSum of cubes till %d is %d (formula)", num, formula_result);
  return 0;
}
