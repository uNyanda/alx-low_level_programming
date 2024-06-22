#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @s: character used to print string
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
