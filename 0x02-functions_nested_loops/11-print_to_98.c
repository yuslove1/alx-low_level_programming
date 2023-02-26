#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural number to 98
 *@n: returning type
 * Return: Always n.
 */

void print_to_98(int n)
{
	int l;

	if (n < 98)
	{
	for (l = n; l <= 98; l++)
	{
	printf("%d", l);
	if (l == 98)
	break;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	}
	else if (n == 98)
	{
	printf("%d", n);
	putchar('\n');
	}
	else
	{
	for (l = n; l >= 98; l--)
	{
	printf("%d", l);
	if (l == 98)
	break;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	}
}
