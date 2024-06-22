#include <stdio.h>
#include <math.h>

/**
 * main -Entry point
 * Description - Print the largest prime factor
 * Return: 0 (success)
 */

int main(void)
{
	long int x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
			{
			printf("%ld\n", maxf);
			}
		}
	}
	return (0);


}
