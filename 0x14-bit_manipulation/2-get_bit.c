#include "main.h"

/**
 * get_bit - this function prints value of a bit at a given index
 * @n: the number to check it bitd
 * @index: the index to get the value at, starting from 0
 *
 * Return: value of the bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= 64)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
