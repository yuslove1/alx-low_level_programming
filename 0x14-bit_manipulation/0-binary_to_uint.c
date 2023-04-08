#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - This fuction converts a binary number to an unsigned in
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: The converted number or 0 if there in other number
 * except 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u_Int; /* u_Int = unsigned int */
	int i;

	if (*b == '\0')
		return (0);

	u_Int = 0;
	for (i = 0; i < b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		u_Int = u_Int * 2 + (b[i] - '0');
	}
	return (u_Int);
}
