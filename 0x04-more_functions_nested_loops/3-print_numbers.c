#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * Return: result
 */

void print_numbers(void)
{

	int c = 0;

	while (c <= 9)
	{
		_putchar(c + 48);
		c++;
	}
	_putchar('\n');
}
