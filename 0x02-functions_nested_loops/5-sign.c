#include "main.h"

/**
 * print_sign - This function prints the sign of a number
 * @n: the number of the sign to be printed
 *
 * Return: 1 if greater than 0, 0 if n is zero, -1 less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
