#include <stdio.h>

/**
 * print_string - function prints string before main function is executed.
 *
 * Return: on success 0.
 */
int __attribute__((constructor))print_string(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
	return (0);
}
