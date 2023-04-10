#include "main.h"

/**
 * get_endianness - this function check the endianness
 * @void: nothing passed
 *
 * Return: 0 if big endian, 1 if litte endian
 */
int get_endianness(void)
{
	char *endian;
	int num = 1;

	endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
