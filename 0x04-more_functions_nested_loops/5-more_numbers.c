#include "main.h"
/**
* more_numbers - print numbers
*
* Return: 0 always
*/

void more_numbers(void)
{
	int i;
	int j;
	int tens;
	int unit;

	for (i = 1; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	tens = j / 10;
	unit = j % 10;

	if (j > 9)
	{
	_putchar(tens + '0');
	}
	_putchar(unit + '0');
	}
	_putchar('\n');
	}
}
