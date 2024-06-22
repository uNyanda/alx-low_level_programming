#include "main.h"

/**
 * print_square - Prints squares
 * @size: size of the square
 */

void print_square(int size)
{
	int s, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (s = 0; s < size; s++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
