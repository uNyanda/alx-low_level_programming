#include "variadic_functions.h"

/**
 * print_all - function prints anything
 *
 * @format: pointer to the constant argument types
 * passed to the function
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list all;

	int i = 0;
	char *s;
	char *separator = "";

	va_start(all, format);
	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;
				case 's':
					s = va_arg(all, char *);
					if (s == NULL)
					{
						printf("%s(nil)", separator);
					}
					else
					{
						printf("%s%s", separator, s);
					}
					break;
				default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
