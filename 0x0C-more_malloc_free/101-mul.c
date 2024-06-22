#include "main.h"

/**
 * main - program multiplies two positive numbers
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int product;
	int n1, n2;

	if (argc != 3)
	{
		_putchar("Error");
		_putchar("\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	if (n1 < 0 || n2 < 0)
	{
		_putchar("Error");
		_putchar("\n");
		exit(98);
	}

	product = mul(n1, n2);
}

/**
 * _is_digit - function checks for a positive integer
 *
 * @s: pointer to string to check from and convert
 *
 * Return: result
 */
int _is_digit(char *s)
{
	int n;

	n = atoi(s);

	return (n > 0);
}

/**
 * mul - function multiplies two numbers
 *
 * @num1: the first number
 * @num2: the second number
 *
 * Return: product
 */
int mul(int num1, int num2)
{
	int prod;

	prod = num1 * num2;

	return (prod);
}

/**
 *
 */
void putnbr(int n)
{
	if (n >= 10)
		putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}
