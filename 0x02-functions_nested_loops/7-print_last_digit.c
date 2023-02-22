#include "main.h"
/**
* print_last_digit - it get last digit of number
* @n: function return type
* Return: this returns the values of the computation
*/
int print_last_digit(int n)
{
	int result = n  % 10;

	if (result < 0)
	result = result * -1;
	_putchar(result + '0');
	return (result);
}
