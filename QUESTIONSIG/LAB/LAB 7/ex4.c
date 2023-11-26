/******************************************************************************

            Experiment - 4 Advanced Programming

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

struct Arr_Elem
{
  int val;
  struct Arr_Elem *Next_Elem;
};
typedef struct Arr_Elem Array;

bool
find_element (Array * elem, int TrueVal)
{
  // Your CODE goes HERE

  // Till HERE
}

int
main ()
{

  int arr[5] = { 5, 4, 3, 2, 1 };

  int TrueVal;
  int sz = 5;
  Array arr_data[sz];

  // Copying the array to the new structure
  for (int i = 0; i < sz; i++)
    arr_data[i].val = arr[i];

  // Making it a chain of elements
  for (int i = 0; i < sz - 1; i++)
    arr_data[i].Next_Elem = &arr_data[i + 1];
  // Updating the Last element 
  arr_data[sz - 1].Next_Elem = NULL;

  printf ("Enter value to find - ");
  scanf ("%d", &TrueVal);
  if (find_element (&arr_data[0], TrueVal))
    printf ("\nElement found in array\n");
  else
    printf ("\nElement NOT found in array\n");

  return 0;
}
