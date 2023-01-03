# C - Sorting algorithms & Big O

Understand at least four different sorting algorithms, the big O notation.

## Helper Files :raised_hands:

* [print_array.c](./print_array.c): C function that prints an array of
integers.
* [print_list.c](./print_list.c): C function that prints a `listint_t`
doubly-linked list.

## Header Files :file_folder:

* [sort.h](./sort.h): Header file containing definitions and prototypes for
all types and functions written for the project.

Data Structure:
```
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
```

Function Prototypes:

| File                       | Prototype                                         |
| -------------------------- | ------------------------------------------------- |
| `print_array.c`            | `void print_array(const int *array, size_t size)` |
| `print_list.c`             | `void print_list(const listint_t *list)`          |
| `0-bubble_sort.c`          | `void bubble_sort(int *array, size_t size);`      |
| `1-insertion_sort_list.c`  | `void insertion_sort_list(listint_t **list);`     |
| `2-selection-sort.c`       | `void selection_sort(int *array, size_t size);`   |
| `3-quick_sort.c`           | `void quick_sort(int *array, size_t size);`       |

## Authors

**Asia Groupierre**
GitHub: [@AsiaGrpr](https://github.com/AsiaGrpr)

**Aymeric Le Penravoux**
GitHub: [@AymericLPR](https://github.com/AymericLPR)

**Marianne Arrué**
GitHub: [@MarianneHolbie](https://github.com/MarianneHolbie)
