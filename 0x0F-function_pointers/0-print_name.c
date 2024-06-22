#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prints a name
 *
 * @name: pointer to the name
 * @f: function pointer
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	(*f)(name);
}
