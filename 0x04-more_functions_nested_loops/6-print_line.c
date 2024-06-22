#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: character to be printed
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		l = 0;
		while (l < n)
		{
			_putchar(95);
			l++;
		}
		_putchar('\n');
	}
}
