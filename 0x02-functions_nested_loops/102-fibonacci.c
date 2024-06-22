#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description - Prints the sum of all multiples of 3 or 5
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
