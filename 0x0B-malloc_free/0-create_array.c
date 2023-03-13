#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates an array of char, and
 * initializes it with a specific char
 * @size: size of the character
 * @c: the character
 *
 * Return: return value of calculated space
 */
char *create_array(unsigned int size, char c)
{
	char *buf;
	unsigned int i;

	if (size == 0)
		return (NULL);

	buf = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	buf[i] = c;

	return (buf);
}
