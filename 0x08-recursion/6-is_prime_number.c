#include "main.h"

int prime_helper(int n, int i);

/**
 * is_prime_number - function returns 1 if the input integer is a prime number
 * otherwise return 0
 *
 * @n: the number to check
 *
 * Return: 1 (is prime), 0 (not prime)
 */
int is_prime_number(int n)
{

	if (n < 0)
	{
		return (0);
	}
	else
	{
		return (prime_helper(n, 2));
	}
}

/**
 * prime_helper - function checks if a number is a prime number
 *
 * @n: the number to check
 * @i: the divisor to test
 *
 * Return: 1 if true, else 0
 */
int prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_helper(n, i + 1));
	}
}
