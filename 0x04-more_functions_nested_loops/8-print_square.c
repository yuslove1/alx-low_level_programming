#include "main.h"
/**
* print_square - this function print square
* @size: the number of times the character # should be printed
* Return: Always 0
*/
void print_square(int size)
{
	int c, r;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (r = 1; r <= size; r++)
	{
	for (c = 1; c <= size - 1; c++)
	{
	_putchar('#');
	}
	_putchar('#');
	_putchar('\n');
	}
	}
}
