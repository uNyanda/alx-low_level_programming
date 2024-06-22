#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function returns the sum of all its
 * parameters
 *
 * @n: numbers to be sum'd
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;

	unsigned int i;
	unsigned int s = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		s = s + va_arg(sum, int);
	}
	va_end(sum);

	return (s);
}
