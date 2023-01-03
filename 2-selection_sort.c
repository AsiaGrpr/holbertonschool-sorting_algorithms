#include "sort.h"

/**
 * selection_sort - sort an array using selection type of sorting
 * @array: a array
 * @size: number of elements
 */

void selection_sort(int *array, size_t size)
{
  size_t i = 0;
  size_t j = 0;
  size_t min_pos = 0;

  if (array == NULL || size < 2)
    return;
  for (i = 0; i < size - 1; i++)
  {
    min_pos = i;
    for (j = i + 1; j < size; j++)
    {
      if (array[j] < array[min_pos])
      {
        min_pos = j;
      }
    }
    if (min_pos != i)
    {
      swap(array, i, min_pos);
      print_array(array, size);
    }
  }
}
