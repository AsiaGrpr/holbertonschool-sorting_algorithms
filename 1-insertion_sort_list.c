#include "sort.h"

/**
 * insertion_sort_list- sort doubly linked list using insertion sort algo
 * @list: doubly linked list
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next; /*nod2*/

	while (current != NULL)
	{
		/* while nod1 != NULL && value nod1 > value nod2*/
		while (current->prev != NULL && current->prev->n > current->n)
		{
			if (current->next) /* nod3 */
				current->next->prev = current->prev; /*prev nod3 point to nod1*/
			current->prev->next = current->next; /*next nod1 point to nod3*/
			current->next = current->prev; /*next nod2 point to nod1*/
			current->prev = current->prev->prev; /*prev nod2 point to prev nod1*/
			current->next->prev = current; /* prev nod3 point to nod2*/
			if (current->prev == NULL)
				*list = current; /*new head*/
			else
				current->prev->next = current;
			print_list(*list);
		}
		current = current->next;
	}
}
