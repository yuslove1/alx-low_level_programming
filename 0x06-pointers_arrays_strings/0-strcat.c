#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry to the concate of two strings
 *
 * @dest: Parameter for string appending to sec. string to
 * @src: Parameter for string appending
 * Return: Return a pointer to the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int length_dest;
	int length_src;

	length_dest = 0;
		while (dest[length_dest] != '\0')
		{
			length_dest++;
		}
		for (length_src = 0; src[length_src] != '\0'; length_src++, length_dest++)
		{
			dest[length_dest] = src[length_src];
		}
		dest[length_dest] = '\0';
		return (dest);
}
