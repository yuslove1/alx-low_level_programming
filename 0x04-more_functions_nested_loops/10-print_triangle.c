#include "main.h"
/**
* print_triangle - this function print triangle
* @size: the number of times the character # should be printed
* Return: Always 0
*/
void print_triangle(int size)
{
	int c, r;

	if (size > 0)
	{
	for (r = 1; r <= size; r++)
	{
	for (c = size - r; c > 0; c--)
	{
	_putchar(' ');
	}
	for (c = 0; c < r; c++)
	{
	_putchar('#');
	}
	if (r == size)
	{
	continue;
	}
	_putchar('\n');
	}
	}
	_putchar('\n');
}
