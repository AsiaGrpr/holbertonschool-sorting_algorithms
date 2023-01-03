#include "sort.h"

/**
 * bubble_sort - f° sorts an array of integers using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void value
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, cond = 1;

	if (array == NULL || size < 2)
		return;

	while (cond)
	{
		cond = 0;

		for (i = 0; i <= (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				cond = 1;

				print_array(array, size);
			}
		}
	}
}
