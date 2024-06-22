#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer to print characters in reverse
 */

void print_rev(char *s)
{
	int count = 0;
	int r;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	s--;

	for (r = count; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
