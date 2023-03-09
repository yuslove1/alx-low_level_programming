#include "main.h"

/**
 * _pow_recursion - this function returns the value of x raised to power of y
 * @x: parameter 1(the number)
 * @y: parameter 2(the power)
 * Return: return the value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
