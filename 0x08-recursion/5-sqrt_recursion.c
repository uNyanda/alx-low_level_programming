#include "main.h"

int root_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number
 *
 * Return: natural square root of n
 * (if n doesn't have a square root the function should
 * return -1)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (root_helper(n, 0));
	}
}

/**
 * root_helper - checks if the number is a natural square
 * root number
 *
 * @i: the number to check
 * @n: the number in the square recursion function
 *
 * Return: the natural square root
 */
int root_helper(int n, int i)
{

	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (root_helper(n, i + 1));
	}
}
