#include "main.h"

/**
 * print_last_digit - This function prints last digit
 * @n: The last digit will be extracted
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}

