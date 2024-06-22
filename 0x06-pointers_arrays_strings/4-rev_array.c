#include "main.h"

/**
 * reverse_array -  a function that reverses the content
 * of an array of integers
 * @a: pointer to use
 * @n: number of elements in array
 * return: result
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
	while (i < n)
	{
		i++;
	}
}

