#include "main.h"
/**
* print_diagonal - this function draw a diagonal line
* @n: the number of times the character / should be printed
* Return: Always 0
*/
void print_diagonal(int n)
{
	int c, r;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (r = 1; r <= n; r++)
	{
	if (r > 1)
	{
	for (c = 1; c <= r - 1; c++)
	{
	_putchar(' ');
	}
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
