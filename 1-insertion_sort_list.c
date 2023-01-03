#include "sort.h"

/**
 * insertion_sort_list- sort doubly linked list using insertion sort algo
 * @list: doubly linked list
 * 
 */

void insertion_sort_list(listint_t **list)
{
    int n;
    listint_t *current, *nod2, *nod1;

    if (list == NULL || (*list)->next == NULL)
        return;

    current = (*list);

    current = current->next;
    
    while (current != NULL)
    {
        n = 0;
        nod2 = current;
        nod1 = current->prev;
        current = current->next;

        while (nod1 != NULL && nod1->n > nod2->n)
        {
            n++;
            nod1 = nod1->prev;
            
        }

        if (n)
        {
            nod2->prev->next = nod2->next;
            if (nod2->next != NULL)
            {
                nod2->next->prev = nod2->prev;
                
            }
                
            if (nod1 == NULL)
            {
                nod1 = *list;
                nod2->prev = NULL;
                nod2->next = nod1;
                nod2->next->prev = nod2;
                print_list(*list);
            }
            else
            {
                nod1 = nod1->next;
                nod1->prev->next = nod2;
                nod2->prev = nod1->prev;
                nod1->prev = nod2;
                nod2->next = nod1;
                print_list(*list);
            }
        }
    }
    (*list) = nod2;
}  
