#include "main.h"

/**
 * factorial - this function returns the factorial of a given number
 * @n: number passing to the function
 * Return: return the value of factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
