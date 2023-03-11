#include "main.h"

/**
 * _strncpy - Function that copies a strings
 *
 * @dest: Parameter for string destination
 * @src: Parameter for string source
 * @n: bytes
 * Return: Return resulting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byteCount;

	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
	{
		dest[byteCount] = src[byteCount];
	}
	for (; byteCount < n; byteCount++)
	{
		dest[byteCount] = '\0';
	}

		return (dest);
}
