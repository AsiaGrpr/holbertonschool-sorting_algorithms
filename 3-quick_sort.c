#include "sort.h"


/**
 * swap- swap 2 elements in an array
 * @array: array to sort
 * @el1: position 1
 * @el2: position 2
 *
 */

void swap(int *array, int el1, int el2)
{
	int value_swap;

	value_swap = array[el1];
	array[el1] = array[el2];
	array[el2] = value_swap;
}


/**
 * part_lomuto- lomuto partition scheme
 * @array: array to sort
 * @start: start of selected zone of array
 * @end: end of selected zone of array
 * @size: size of array
 *
 * Return: index of pivot position
 */

int part_lomuto(int *array, int start, int end, size_t size)
{
	int i, j, pivot;

	pivot = array[end];
	i = start - 1;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}

	if (array[end] < array[i + 1])
	{
		swap(array, i + 1, end);
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * quickSort- function recursive to sort with quicksort algo
 * @array: array to sort
 * @start: first case
 * @end: last casei
 * @size: size of the array
 *
 */

void quickSort(int *array, int start, int end, size_t size)
{
	int position;

	if (end - start > 0)
	{
		position = part_lomuto(array, start, end, size);
		quickSort(array, start, position - 1, size);
		quickSort(array, position + 1, end, size);
	}
}

/**
 * quick_sort- sort array using quick sort algo
 * @array: array to sort
 * @size: size of array
 *
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quickSort(array, 0, size - 1, size);

}
