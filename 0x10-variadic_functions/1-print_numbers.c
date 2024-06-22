#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int i;
	unsigned int num;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);

}
