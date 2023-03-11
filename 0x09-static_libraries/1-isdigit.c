#include "main.h"
/**
* _isdigit - check for uppercase digit
* @c: parameter checking
* Return: return 1 if c is digit and 0 otherwise
*/

int _isdigit(int c)
{

	if (c >= 0 + '0' && c <= 9 + '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
