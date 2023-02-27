#include "main.h"

/**
* swap_int - this function swap value
* @a: parameter 1
* @b: parameter 2
* Return: void
*/
void swap_int(int *a, int *b)
{
	int f;
	f = *a;

	*a = *b;
	*b = f;
}
