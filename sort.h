#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* gived function */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* sorting algorithm function */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* associated function */
void swap(int *array, int el1, int el2);
int part_lomuto(int *array, int start, int end, size_t size);
void quickSort(int *array, int start, int end, size_t size);

#endif
