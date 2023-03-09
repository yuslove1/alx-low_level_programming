#include "main.h"

/**
 * _strlen_recursion - This function returns lenght of string
 * @s: The strint passing
 * Return: lenght
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
