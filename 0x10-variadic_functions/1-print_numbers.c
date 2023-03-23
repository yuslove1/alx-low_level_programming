#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - this function print number given to it
 * @n: numbers to print
 * @separator: the string to be printed between numbers
 *
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list par;
	int num;
	unsigned int i;

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(par, int);
		printf("%d", num);
		if (i != (n-1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}
