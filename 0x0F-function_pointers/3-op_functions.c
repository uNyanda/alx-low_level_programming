#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function returns the sum of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * op_sub - function returns the difference of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	int dif;

	dif = a - b;

	return (dif);
}

/**
 * op_mul - function returns product of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: product.
 */
int op_mul(int a, int b)
{
	int prd;

	prd = a * b;

	return (prd);
}

/**
 * op_div - function returns the devision of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: division
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;

	return (div);
}

/**
 * op_mod - function returns the remainder of the division of a by b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	int rem;

	rem = a % b;

	return (rem);
}
