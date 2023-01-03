#include "sort.h"

/**
 * selection_sort - sort an array using selection type of sorting
 * @array: a array
 * @size: number of elements
 */

void selection_sort(int *array, size_t size)
{
  size_t i;
  size_t j;
  int min_pos;
  size_t tmp = 0;

  for (i = 0; i < size - 1; i++)
  {
    min_pos = array[i];
    for (j = i; j < size; j++)
    {
      if (array[j] < min_pos)
      {
        tmp = j;
        min_pos = array[j];
      }
    }
    if (tmp != 0)
    {
      j = array[i];
      array[i] = array[tmp];
      array[tmp] = j;
      print_array(array, size);
    }
  }
}
