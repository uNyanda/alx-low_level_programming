#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Desccription - prints sum of all multiples of 10 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	printf("%i\n", sum);
	return (0);
}
