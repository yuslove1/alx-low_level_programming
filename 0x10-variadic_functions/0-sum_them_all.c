#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - this function sum all it parameters
 * @n: number of the parameter to sum
 *
 * Return: return sum of the parameter or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	
	va_start(par, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(par, int);

	va_end(par);
	return (sum);
}
