#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	char *s;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
