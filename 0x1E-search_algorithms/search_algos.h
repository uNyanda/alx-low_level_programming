#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node.
 *
 * Description: singly linked list node structure.
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* 0-linear.c */
int linear_search(int *array, size_t size, int value);

/* 1-binary.c */
int binary_search(int *array, size_t size, int value);

/* 100-jump.c */
int jump_search(int *array, size_t size, int value);

/* 102-interpolation.c */
int interpolation_search(int *array, size_t size, int value);

/* 103-exponential.c */
int exponential_search(int *array, size_t size, int value);

/* 104-advanced_binary.c */
int advanced_binary(int *array, size_t size, int value);

/* 105-jump_list.c */
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif
