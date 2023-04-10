#include "main.h"

/**
 * flip_bits - A function that prints number of bit needs to flip to get
 *	from one number to another.
 * @n: the number flipping from
 * @m: the number flipping to
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nXorm;
	unsigned long int count;

	nXorm = n ^ m;

	count = 0;
	while (nXorm)
	{
		count += nXorm & 1;
		nXorm >>= 1;
	}
	return (count);
}
