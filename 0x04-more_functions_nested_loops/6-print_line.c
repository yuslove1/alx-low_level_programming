#include "main.h"
/**
* print_line - this function draw line
* @n: the number of times the character _ should be printed
* Return: Always 0
*/
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 1; c <= n; c++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
