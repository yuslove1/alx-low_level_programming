#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_strings - this function print number given to it
 * @n: numbers of strings to print
 * @separator: the string to be printed between the strings
 *
 * Return: always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	char *data;
	unsigned int i;

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		data = va_arg(par, char *);
		if (data == NULL)
			printf("(nil)");
		else
			printf("%s", data);
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}
