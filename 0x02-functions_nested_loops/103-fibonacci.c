#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description - Prints even numbers < 4000000
 * Return: 0 (success)
 */

int main(void)
{
	int d = 0, e = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = d + e;
		d = e;
		e = next;

		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
