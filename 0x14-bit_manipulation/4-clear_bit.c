#include "main.h"

/**
 * set_bit - this function set value of a bit to 0 at a given index
 * @n: pointer to the number to check it bit
 * @index: the index we're setting 0 to, starting from 0
 *
 * Return: 1 if worked or -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
