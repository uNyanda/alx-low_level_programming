#include "main.h"

/**
 * swap_int - swaps values of 2 integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
